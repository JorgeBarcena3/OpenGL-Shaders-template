
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
 *                                                                             *
 *  Copyright © 2014+ Ángel Rodríguez Ballesteros                              *
 *                                                                             *
 *  Distributed under the Boost Software License, version  1.0                 *
 *  See documents/LICENSE.TXT or www.boost.org/LICENSE_1_0.txt                 *
 *                                                                             *
 *  Started by Ángel on april of 2014                                          *
 *                                                                             *
 *  angel.rodriguez@esne.edu                                                   *
 *                                                                             *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef OGL_VERTEX_SHADER_HEADER
#define OGL_VERTEX_SHADER_HEADER

    #include "Shader.hpp"

    namespace shaderToolkit
    {

        class Vertex_Shader : public Shader
        {
        public:

            Vertex_Shader(const Source_Code & source_code)
            :
                Shader(source_code, GL_VERTEX_SHADER)
            {
            }

        };

    }

#endif
