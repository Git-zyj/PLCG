/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78032
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_20 -= ((/* implicit */unsigned short) ((signed char) ((unsigned int) var_8)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                arr_8 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_5))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(arr_7 [i_1 - 1] [i_2] [i_2]))))));
                arr_9 [i_1] [i_1 - 1] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (arr_4 [i_0] [i_0] [i_0])))));
            }
        }
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11696)))))) / ((+(-2067409039886281382LL)))))) ? (((arr_7 [(unsigned short)5] [i_3] [i_3]) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [(_Bool)1]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((short) (_Bool)1))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 11; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_24 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4 + 2] [i_4 + 2] [i_4 - 2])) ^ (((/* implicit */int) (!((_Bool)1))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_19)) | (((/* implicit */int) (_Bool)1))))))));
                            var_24 = ((/* implicit */unsigned char) min((arr_7 [i_0] [i_0 - 1] [i_0 - 1]), (min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) arr_23 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 3]))))));
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned char)194)))))) : (((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)244))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_18 [i_0] [i_0 + 3]))))));
        arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((-(-2133293956))) != (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_0] [i_0])) ? (var_10) : (((/* implicit */int) var_18))))))), (var_1)));
        var_26 -= ((/* implicit */signed char) var_9);
    }
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_3))));
}
