/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72633
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) (-(-9223372036854775802LL)));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (arr_13 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / ((-(9223372036854775807LL)))))) || (((/* implicit */_Bool) min((max((-3374601762920792193LL), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_2] [i_4] [i_1] [i_0 - 1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))))));
                                var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) -978302002)) : (958313154U))) > (max((arr_10 [i_0] [i_1]), (((/* implicit */unsigned int) (short)-32764))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [12U])), (-5128705002164789491LL)))) || (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_3 - 1] [i_4] [i_4] [i_4]))));
                            }
                            arr_15 [i_0] [i_2] [i_2] [9U] [(short)9] = ((/* implicit */unsigned char) min((arr_12 [i_0 - 2] [10LL] [i_0] [i_0 - 1]), (((/* implicit */long long int) arr_1 [i_0 - 2] [i_0 + 1]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) var_15);
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    arr_19 [i_0] [i_5] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(short)3] [(short)11])) && ((_Bool)1)))), ((+(arr_12 [i_0] [i_0] [7U] [i_5 - 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12833)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_0 + 1]))))) ? (((/* implicit */long long int) ((arr_6 [8] [i_1] [i_1]) & (((/* implicit */int) (_Bool)1))))) : (((arr_12 [i_0] [(signed char)7] [13LL] [i_0 - 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0]))))))) : (((/* implicit */long long int) (-((+(arr_16 [i_1] [i_1] [i_1] [i_1]))))))));
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_3 [i_5 + 1] [6U] [(signed char)1]), (arr_8 [i_1] [(unsigned short)8] [i_5 + 2] [i_5] [2U] [i_5])))), (((((/* implicit */_Bool) (unsigned short)64277)) ? (var_5) : (((/* implicit */unsigned int) var_10))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_5 [i_1]), (var_11)))) ? (((/* implicit */int) arr_4 [i_0 + 2] [6ULL] [i_5] [i_1])) : (((/* implicit */int) (!((_Bool)1))))))) : (((((/* implicit */unsigned int) -1)) & (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) 2147483647))))))));
                }
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */int) arr_17 [i_0 + 2]);
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (arr_16 [i_0 - 1] [(signed char)3] [i_8] [i_6]))) != (var_14)))), (min((arr_10 [i_0] [i_0 + 2]), (((/* implicit */unsigned int) ((int) arr_5 [i_1]))))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) min((((min((arr_12 [i_0 - 2] [(short)3] [i_0 + 1] [10ULL]), (((/* implicit */long long int) var_11)))) + (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_12))))), (((signed char) (short)32767)))))));
                    var_29 = ((((((/* implicit */_Bool) arr_26 [i_6] [i_0 + 2] [i_1] [10LL] [(unsigned short)10])) ? (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_0 - 1] [i_1])) : (((/* implicit */int) arr_26 [i_6] [i_1] [i_1] [i_1] [i_1])))) != ((+(((/* implicit */int) arr_26 [i_6] [i_1] [i_1] [i_1] [i_1])))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((int) ((unsigned int) ((unsigned short) (_Bool)1)))))));
                }
                arr_27 [i_0 + 2] [i_1] = ((/* implicit */signed char) ((((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_13)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_0);
    var_32 = ((/* implicit */int) max((var_32), ((-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (-1322729987)))))))))));
    var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) var_16))))) ? (((unsigned int) var_19)) : (((/* implicit */unsigned int) max((var_19), (((/* implicit */int) var_9))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
