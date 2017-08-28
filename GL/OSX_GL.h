#ifndef __osx_gl_h_
#define __osx_gl_h_

/* BeginMode */
#define GL_POINTS                         0x0000
#define GL_LINES                          0x0001
#define GL_LINE_LOOP                      0x0002
#define GL_LINE_STRIP                     0x0003
#define GL_TRIANGLES                      0x0004
#define GL_TRIANGLE_STRIP                 0x0005
#define GL_TRIANGLE_FAN                   0x0006
#define GL_QUADS                          0x0007
#define GL_QUAD_STRIP                     0x0008
#define GL_POLYGON                        0x0009

/* MatrixMode */
#define GL_MODELVIEW                      0x1700
#define GL_PROJECTION                     0x1701
#define GL_TEXTURE                        0x1702

/* ShadingModel */
#define GL_FLAT                           0x1D00
#define GL_SMOOTH                         0x1D01

#ifdef __cplusplus
extern "C" {
#endif

void glMatrixMode(	GLenum mode);
void glShadeModel(	GLenum mode);



void gluPerspective(	GLdouble fovy,
 	GLdouble aspect,
 	GLdouble zNear,
 	GLdouble zFar);

void glTranslated(	GLdouble  	x,   	GLdouble  	y,   	GLdouble  	z);
void glTranslatef(	GLfloat  	x,   	GLfloat  	y,   	GLfloat  	z);


void glBegin(GLenum mode);
void glEnd();

void glLoadIdentity(	void);
void glVertex2s(	GLshort x, 	GLshort y);
void glVertex2i(	GLint x, 	GLint y);
void glVertex2f(	GLfloat x, 	GLfloat y);
void glVertex2d(	GLdouble x, 	GLdouble y);
void glVertex3s(	GLshort x, 	GLshort y, 	GLshort z);
void glVertex3i(	GLint x, 	GLint y, 	GLint z);
void glVertex3f(	GLfloat x, 	GLfloat y, 	GLfloat z);
void glVertex3d(	GLdouble x, 	GLdouble y, 	GLdouble z);
void glVertex4s(	GLshort x, 	GLshort y, 	GLshort z, 	GLshort w);
void glVertex4i(	GLint x, 	GLint y, 	GLint z, 	GLint w);
void glVertex4f(	GLfloat x, 	GLfloat y, 	GLfloat z, 	GLfloat w);
void glVertex4d(	GLdouble x, 	GLdouble y, 	GLdouble z, 	GLdouble w);

void glColor3b(	GLbyte  	red,
 	GLbyte  	green,
 	GLbyte  	blue);
void glColor3s(	GLshort  	red,
 	GLshort  	green,
 	GLshort  	blue);
void glColor3i(	GLint  	red,
 	GLint  	green,
 	GLint  	blue);
void glColor3f(	GLfloat  	red,
 	GLfloat  	green,
 	GLfloat  	blue);
void glColor3d(	GLdouble  	red,
 	GLdouble  	green,
 	GLdouble  	blue);
void glColor3ub(	GLubyte  	red,
 	GLubyte  	green,
 	GLubyte  	blue);
void glColor3us(	GLushort  	red,
 	GLushort  	green,
 	GLushort  	blue);
void glColor3ui(	GLuint  	red,
 	GLuint  	green,
 	GLuint  	blue);
void glColor4b(	GLbyte  	red,
 	GLbyte  	green,
 	GLbyte  	blue,
 	GLbyte  	alpha);
void glColor4s(	GLshort  	red,
 	GLshort  	green,
 	GLshort  	blue,
 	GLshort  	alpha);
void glColor4i(	GLint  	red,
 	GLint  	green,
 	GLint  	blue,
 	GLint  	alpha);
void glColor4f(	GLfloat  	red,
 	GLfloat  	green,
 	GLfloat  	blue,
 	GLfloat  	alpha);
void glColor4d(	GLdouble  	red,
 	GLdouble  	green,
 	GLdouble  	blue,
 	GLdouble  	alpha);
void glColor4ub(	GLubyte  	red,
 	GLubyte  	green,
 	GLubyte  	blue,
 	GLubyte  	alpha);
void glColor4us(	GLushort  	red,
 	GLushort  	green,
 	GLushort  	blue,
 	GLushort  	alpha);
void glColor4ui(	GLuint  	red,
 	GLuint  	green,
 	GLuint  	blue,
 	GLuint  	alpha);

#ifdef __cplusplus
}
#endif

#endif
