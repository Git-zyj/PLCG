/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60903
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0 + 1] [i_2]), (arr_2 [i_0] [i_0 + 2] [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)33136)) ? (((/* implicit */int) var_8)) : (-1309438014))) : (min((-1309438014), (((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_2]))))));
                    var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1] [i_0 + 2] [i_2])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (arr_0 [i_0])))));
                    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) (unsigned char)234))))));
                    arr_7 [(unsigned short)0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 2757534287U)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)25))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((-3098028271117092209LL), (((/* implicit */long long int) (((-(((/* implicit */int) var_5)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -1309438014)))))))))))));
                                var_14 = ((/* implicit */unsigned short) (+(3996337578972200960LL)));
                                var_15 ^= ((/* implicit */signed char) ((((-265754186) == (1163043564))) && (((/* implicit */_Bool) max((((arr_11 [i_0]) / (((/* implicit */unsigned int) 1497587942)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-14855))))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [(unsigned short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3351382717U)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : ((-(-3996337578972200960LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_9)) + (2147483647))) >> (((arr_11 [i_0 + 2]) - (1835500117U)))))));
                    arr_18 [0LL] [i_6] = ((/* implicit */long long int) (~((-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 + 2])) == (((/* implicit */int) var_9)))))))));
                    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_2))));
                    var_18 = ((/* implicit */int) ((_Bool) arr_16 [i_5] [i_5] [8U] [(short)1]));
                    arr_19 [i_5] [(short)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-83)) : (arr_16 [(unsigned char)0] [i_5] [(unsigned char)0] [(unsigned char)0]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_7])), (var_2)))) == (((/* implicit */int) (unsigned char)234))))), (var_2)));
        var_20 = ((/* implicit */unsigned short) min(((-((~(((/* implicit */int) (unsigned char)222)))))), (((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned char)77))))) - (((/* implicit */int) var_9))))));
        arr_22 [i_7] [i_7] = min((((((/* implicit */_Bool) arr_20 [i_7])) ? ((~(var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7]))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)98)), (max((((/* implicit */unsigned char) var_4)), (var_2)))))));
    }
    var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_8)) - (4037))))));
}
