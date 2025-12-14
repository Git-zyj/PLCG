/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62164
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_1]);
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (((+(var_4))) != (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-85)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65516))))))));
            arr_6 [10] [i_1 + 1] &= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)1)), ((+(((/* implicit */int) (short)(-32767 - 1)))))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (min((((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) (unsigned char)255))))));
        }
        for (signed char i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
        {
            arr_11 [5] [i_0] [(unsigned short)8] = ((/* implicit */long long int) ((max((arr_3 [i_0 + 1] [3LL] [i_2 - 1]), (((/* implicit */unsigned int) var_13)))) & (((max((((/* implicit */unsigned int) (short)-16743)), (arr_0 [i_0] [i_0]))) | (arr_3 [i_2] [i_2 + 3] [i_0 + 2])))));
            arr_12 [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0 + 2]);
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)14))));
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-32757)), ((~(((/* implicit */int) (unsigned short)0))))))) ? (min((-1118877375), ((~(((/* implicit */int) arr_19 [i_3] [i_5])))))) : ((+(((/* implicit */int) arr_20 [i_3]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0 + 2] [i_0] [(signed char)1] [i_6]))));
            arr_26 [i_0] = ((/* implicit */unsigned short) (unsigned char)247);
        }
        arr_27 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)252))));
        arr_28 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) (unsigned short)18972)) ? (((/* implicit */int) (short)-32742)) : (((/* implicit */int) (unsigned char)24)))))));
        var_22 = ((short) ((((/* implicit */_Bool) 1048575ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (9431506594120496454ULL)));
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_14))));
}
