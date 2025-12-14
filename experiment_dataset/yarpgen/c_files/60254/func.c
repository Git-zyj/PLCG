/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60254
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551606ULL))));
            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((var_9), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_6)))))))))));
        }
        var_12 = min((((/* implicit */unsigned int) var_4)), (27U));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((6587949140307552550ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? ((+(((((/* implicit */int) var_4)) << (((11858794933401999065ULL) - (11858794933401999055ULL))))))) : (((/* implicit */int) ((405346472U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        var_14 = ((/* implicit */int) (unsigned short)65514);
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_2 + 3]) / (((/* implicit */unsigned int) var_7))))) ? (arr_5 [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)25))))));
        arr_7 [i_2 + 4] [i_2 + 2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_2 + 3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) -104171318)) || (((/* implicit */_Bool) (signed char)127))))) : ((~(((/* implicit */int) arr_6 [i_2 - 1]))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_9 [i_2] [i_3]))));
            var_17 = ((/* implicit */unsigned short) var_1);
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -314354472)) || (((/* implicit */_Bool) (unsigned short)31290))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 4; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_2] [(unsigned short)4])))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_4] [i_3] [i_6])) / (-104171308)))) && (((((/* implicit */_Bool) arr_13 [i_2] [i_5])) || (((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4] [i_5] [15] [i_6]))))))) < (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_0))) > (((/* implicit */int) arr_6 [i_5])))))));
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((arr_14 [i_2 + 2] [i_3] [i_4] [i_5] [i_5]) ? (((/* implicit */int) arr_14 [(signed char)3] [(signed char)3] [i_4] [i_5] [i_5])) : (var_9))) == (((/* implicit */int) arr_13 [i_4] [i_4]))))) + (((/* implicit */int) (signed char)93))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
            }
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                arr_19 [i_7] [i_3] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)13626);
                arr_20 [i_2] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_8))))))) << ((((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_12 [i_2] [(signed char)19] [i_3] [i_3] [(signed char)19] [i_7]))))) + (17LL)))));
            }
            for (int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) -512152836)) ? (11858794933401999082ULL) : (((/* implicit */unsigned long long int) -685538374))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (signed char)-125))));
                    arr_26 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((3889620824U), (((/* implicit */unsigned int) arr_11 [(signed char)11] [i_3] [i_8])))))));
                }
                var_25 -= ((/* implicit */unsigned short) ((-104171293) - (((/* implicit */int) (signed char)113))));
                var_26 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
            }
            /* LoopNest 3 */
            for (signed char i_10 = 4; i_10 < 19; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_11] [i_2] [12ULL] [(signed char)6] &= var_8;
                            arr_34 [i_2] [i_10] [i_2] [i_11] = ((/* implicit */unsigned char) max((((unsigned short) 512152828)), (((/* implicit */unsigned short) var_0))));
                        }
                    } 
                } 
            } 
        }
    }
    var_27 = ((/* implicit */int) var_5);
}
