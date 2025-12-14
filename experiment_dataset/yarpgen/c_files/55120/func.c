/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55120
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (-5535995974395573116LL) : (5535995974395573117LL)))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned char)121))))) ? (((/* implicit */int) (signed char)-16)) : ((~(((/* implicit */int) (unsigned char)98))))))) ? (((1682770300) & (((/* implicit */int) max(((unsigned char)130), ((unsigned char)126)))))) : (((/* implicit */int) min(((signed char)-86), ((signed char)-79))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1 + 1] [i_1 - 1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)75))))) ? (((((/* implicit */_Bool) (unsigned char)50)) ? (((((/* implicit */_Bool) (short)-4969)) ? (((/* implicit */int) (short)2016)) : (((/* implicit */int) (unsigned char)133)))) : (((/* implicit */int) (short)0)))) : ((+((+(((/* implicit */int) (short)1991)))))));
                var_22 *= ((/* implicit */int) (~(((((((/* implicit */_Bool) (short)25277)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-1992))))) : (((((/* implicit */_Bool) (short)1983)) ? (7685777798163139830LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32764)))))))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))), ((-(((/* implicit */int) (unsigned char)0)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_7);
}
