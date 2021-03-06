char terrain_displacement_mapping_flat_vert[] = "varying vec2 texcoord;\n"
                                                "varying vec4 basecolor;\n"
                                                "\n"
                                                "void main(void)\n"
                                                "{\n"
                                                "    texcoord = gl_MultiTexCoord0.xy;\n"
                                                "\n"
                                                "    float height_center = 0;\n"
                                                "\n"
                                                "    // note, need to introduce a proper lighting computation based on the gl_Normal.xyz\n"
                                                "    vec3 normal = vec3(0.0, 0.0, 1.0);\n"
                                                "    float intensity = normal.z;\n"
                                                "    basecolor = vec4(intensity, intensity, intensity, 1.0);\n"
                                                "\n"
                                                "    vec3 position = gl_Vertex.xyz + gl_Normal.xyz * height_center ;\n"
                                                "    gl_Position   = gl_ModelViewProjectionMatrix * vec4(position,1.0);\n"
                                                "};\n"
                                                "\n";
