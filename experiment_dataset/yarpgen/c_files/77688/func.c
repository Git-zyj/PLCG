/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77688
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [(short)14] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)-32758)), (2147352576U)));
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1759914078)) ? (((/* implicit */int) arr_1 [(unsigned short)14])) : (((/* implicit */int) var_11))))) ? (var_3) : (((((/* implicit */_Bool) max(((unsigned char)22), (var_11)))) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned char)240)))))))));
                    var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (((var_10) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0])))) : (min((-1759914107), (((/* implicit */int) (short)-15323)))))), (max(((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))), (arr_3 [i_0] [i_1] [i_1])))));
                    var_14 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((+(((/* implicit */int) arr_0 [i_1])))) : ((-(var_3)))))) | (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((var_3) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)100))) : (var_5))) - (71LL)))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1040187392U)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)36227)))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)36214))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            {
                var_16 -= ((/* implicit */long long int) (((((+(((/* implicit */int) (short)-18654)))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_10 [i_4] [i_3]))))) ? (((/* implicit */long long int) var_1)) : (var_6))) - (19407270LL)))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)62151))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) (unsigned short)29305)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (4294967295U));
                            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18660))) != ((+(var_9)))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)64))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (signed char)-99);
    var_22 = ((/* implicit */long long int) max((var_22), (17873661021126656LL)));
}
