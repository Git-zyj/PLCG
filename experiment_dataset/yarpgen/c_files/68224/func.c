/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68224
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (max((((/* implicit */unsigned int) arr_0 [i_0])), (var_9)))))) & (((/* implicit */int) ((((/* implicit */long long int) (+(arr_2 [i_0] [i_0])))) <= (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)31)), ((short)12039)))) ? (min((((/* implicit */unsigned int) (unsigned char)246)), ((-(arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5803))) : (arr_7 [i_0] [i_2] [i_1] [i_0])))));
                        var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)0))))))), (arr_9 [i_0] [i_1] [i_2])));
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((-6437586948989809211LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((7650083475314534192LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))) >> ((((((~(((/* implicit */int) var_4)))) * (((/* implicit */int) (_Bool)1)))) + (145)))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-13650)) & (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [(unsigned short)2]))))) ? ((((_Bool)0) ? (var_7) : (((/* implicit */unsigned long long int) arr_15 [(unsigned char)17] [i_0])))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_1))))) ? (var_7) : (((/* implicit */unsigned long long int) arr_5 [5LL]))))));
                        arr_17 [i_0] = ((/* implicit */int) (((~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_4])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)-32570)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (short)-5811)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((max((arr_8 [i_0]), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_9)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                                arr_25 [i_0] [i_2] [i_0] = ((((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0]))))) - (((((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [i_2] [17U] [i_2]), (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) -1482842203)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) arr_22 [i_0])))) : (((-1204994523) | (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    var_18 = min((((8099911344550550853LL) - (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)210), (((/* implicit */unsigned char) var_6)))))))), (-993119506881966582LL));
                    arr_26 [i_0] [i_0] = arr_18 [i_0] [i_0] [i_0] [i_0] [i_2];
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) var_7);
        var_20 = ((/* implicit */_Bool) var_3);
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)110)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)29)) > (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
    var_22 = ((((/* implicit */_Bool) (-((+(var_7)))))) && (((/* implicit */_Bool) var_10)));
}
