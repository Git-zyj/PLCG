/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96853
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(arr_2 [i_0]))))));
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) max(((short)-16384), (((/* implicit */short) (unsigned char)220)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) (signed char)123);
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (short)-7469))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4004202510711676002ULL)))) : (4004202510711675997ULL)));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (3013232615U)));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_18 &= ((/* implicit */short) min((((((/* implicit */_Bool) 8850467696721625500ULL)) ? (arr_17 [i_5] [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))), (((arr_17 [i_3] [i_4] [i_5]) % (arr_17 [i_3] [i_3] [i_3])))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_10 [i_3]))));
                        var_20 += ((/* implicit */int) arr_13 [i_6] [i_4]);
                        arr_19 [i_4] [i_4] [i_6 - 1] [i_6] &= ((/* implicit */unsigned long long int) (~(3013232615U)));
                    }
                    for (int i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        arr_22 [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) ((arr_13 [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((5128061790298933235ULL) - (((/* implicit */unsigned long long int) -1038822999)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))))), (((/* implicit */unsigned long long int) var_6))));
                        arr_23 [i_3] [i_4] [17] [i_5] [i_3] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) min((arr_9 [i_3]), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            arr_26 [i_3] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_4] [i_7 + 2] [i_7 + 3] [i_4] [i_8 + 1]))))) >> (min((max((arr_21 [i_3] [i_3]), (arr_21 [i_3] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_20 [i_3] [i_3] [i_5] [i_3] [i_5])))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) : (14442541562997875594ULL))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4] [i_4] [i_8] [i_3] [i_8]))) - ((-((+(14442541562997875614ULL)))))));
                            arr_27 [i_8] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_20 [i_8] [i_8 + 1] [i_8] [i_7 + 1] [i_7 + 1])) > (((/* implicit */int) arr_20 [i_8] [i_8 + 3] [i_7 - 1] [i_7 - 1] [i_7 - 1])))))));
                            arr_28 [i_3] [i_3] [i_4] [i_3] [i_5] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4004202510711675997ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) ((int) (signed char)-4)))));
                        }
                        for (short i_9 = 2; i_9 < 23; i_9 += 3) 
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_7 - 1] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-28465)) % (((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)10))))));
                            arr_33 [i_3] [i_4] [(unsigned char)0] [i_4] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)128)) && (((/* implicit */_Bool) 1775280095698336073ULL)))) ? (((/* implicit */int) ((_Bool) arr_18 [16LL] [i_4] [i_5] [i_9 - 2]))) : (((((/* implicit */_Bool) 4004202510711676028ULL)) ? (((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_9 - 1] [i_4])) : (((/* implicit */int) arr_25 [i_4] [i_4] [i_5] [i_9 - 1] [i_3]))))));
                        }
                        var_23 ^= ((/* implicit */unsigned long long int) arr_30 [i_3] [i_4] [i_3]);
                    }
                    arr_34 [i_4] = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) -7189692494425330357LL)) ? (var_1) : (((/* implicit */int) (signed char)-8))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-144115188075855872LL))))), (832101611895255767LL)));
                    arr_35 [i_5] [i_4] [i_3] [i_3] = ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_3] [i_4] [i_5] [i_3] [i_3] [i_4]))) < ((-(4611686018427387903LL)))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4004202510711676015ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)20))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))) : (((arr_17 [i_3] [i_3] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))) + (((/* implicit */long long int) (+(arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3)))))));
    var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-740334548) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) < (((((/* implicit */int) var_6)) | (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_3))))))));
}
