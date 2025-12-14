/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7654
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((var_10) ? (((/* implicit */int) (signed char)-1)) : (var_15))))) & ((-(((/* implicit */int) (signed char)-1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (min(((_Bool)1), (min(((_Bool)1), ((_Bool)1)))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_15) * (((/* implicit */int) var_10))))) | (var_4)))) ? (((int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) (signed char)22)) | ((-(-1196184194)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2] [i_4])) + (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2] [14]))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_9 [16U] [i_0] [i_2] [i_2]))));
                                var_23 = var_12;
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_18))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_0]))) : (((unsigned long long int) var_5))));
                                var_25 *= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1196184194)))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_13)), ((short)-28647)))) ? (((((/* implicit */int) (signed char)6)) - (((/* implicit */int) var_18)))) : (((/* implicit */int) arr_11 [i_5] [i_1 + 1] [i_5]))))) ? (((/* implicit */long long int) ((1941647000) + (((/* implicit */int) var_17))))) : (min((arr_1 [i_0 - 1]), (((/* implicit */long long int) (signed char)10))))));
                                arr_18 [i_0] = var_10;
                                var_27 = ((/* implicit */unsigned char) ((((int) ((unsigned char) var_0))) ^ (((((/* implicit */int) ((((/* implicit */long long int) var_0)) != (var_4)))) & (((/* implicit */int) var_1))))));
                                var_28 += ((/* implicit */signed char) ((((1196184194) - (((/* implicit */int) (unsigned char)253)))) == (((((/* implicit */int) var_11)) / (arr_15 [i_0 + 2] [i_0 + 2])))));
                                var_29 -= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */short) (signed char)0)), ((short)19162))));
                            }
                            var_30 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])));
                            var_31 = ((/* implicit */int) (short)2561);
                            var_32 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (((~(var_12))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_1] [i_2]) <= (((/* implicit */int) (_Bool)1)))))))))) + (((arr_2 [i_2] [i_1 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1 - 1]))) : (var_4)))));
                            arr_19 [i_0] [i_1 + 1] [i_0] [(unsigned char)3] = var_2;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_0] [i_1] [i_0] [i_0] = (signed char)-15;
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned long long int) 1941647000))))) ? (max((var_0), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1 + 1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)77))))) ? (arr_8 [i_0 - 2] [i_1] [i_6]) : ((~(((/* implicit */int) (signed char)6))))))))))));
                }
            }
        } 
    } 
}
