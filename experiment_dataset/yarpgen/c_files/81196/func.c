/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81196
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
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_11 = ((/* implicit */signed char) arr_0 [i_0] [(short)6]);
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_7))) ^ ((~(((/* implicit */int) arr_8 [i_1]))))))), (((arr_8 [i_0]) ? (min((1073741823LL), (((/* implicit */long long int) arr_8 [i_1])))) : (((1073741826LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))))))))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) var_9))) % (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (1073741826LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25304))) : (((arr_0 [i_3] [i_1]) ? (((/* implicit */unsigned long long int) -1073741823LL)) : (var_3)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            var_14 = ((unsigned short) -3092912780012091218LL);
                            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) -6677679147477694055LL));
                            arr_15 [i_0 + 3] [i_2] [i_5] [i_4] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_8 [i_5 + 4])))) + (2147483647))) >> (((((unsigned long long int) var_4)) - (18446744073709521605ULL)))));
                            var_15 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25304)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3)))) ? (((((/* implicit */_Bool) 1909342680)) ? (var_5) : (0ULL))) : (((/* implicit */unsigned long long int) ((3590211451331820307LL) >> (((var_2) - (4143870863415519435ULL)))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2 + 2] [i_2 + 2] [i_5 + 1])) >> (((var_9) + (7020749255321073190LL))))))));
                            var_16 = ((/* implicit */unsigned int) var_9);
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((unsigned char) var_0));
                            arr_19 [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_2] [13LL] [i_6])) ? (((/* implicit */int) arr_18 [(unsigned char)18] [i_2] [i_2 - 1] [i_4] [i_2] [(unsigned short)13] [i_0 - 4])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_2] [i_6] [i_6]))))) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_2] [i_6] [i_6])) : (((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 3])) : (((/* implicit */int) arr_16 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_4])))));
                            arr_20 [i_0] [i_0] [i_0 - 4] [i_0] [i_2] [i_0] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 1]));
                        }
                        var_18 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_5) : (((/* implicit */unsigned long long int) var_9))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        var_19 += ((/* implicit */unsigned char) ((((-1909342680) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 1] [i_2 + 1])) - (91)))));
                        arr_23 [i_2] [i_2] [4LL] = ((/* implicit */unsigned char) ((((long long int) var_2)) ^ (((((/* implicit */_Bool) (unsigned char)209)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 4] [i_1])))))));
                        arr_24 [i_0] [i_2] [i_7] = ((/* implicit */long long int) ((unsigned int) ((var_9) - (((/* implicit */long long int) var_1)))));
                        arr_25 [i_0 + 1] [i_1] [i_2] [(_Bool)1] = ((signed char) (unsigned char)40);
                    }
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_1] [i_0] [i_1] [i_1]))))))) ^ (min((((unsigned long long int) arr_17 [i_0] [i_0] [16ULL])), (((/* implicit */unsigned long long int) var_1))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_0 + 2] [i_2] [i_0] [i_2 + 1]), (((unsigned int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_2] [i_1])) : ((+(((((/* implicit */int) var_10)) % (((/* implicit */int) (short)31819))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_22 = ((/* implicit */long long int) var_5);
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_13 [8U] [i_8] [i_8] [i_8] [i_8] [(signed char)2]))));
    }
    var_24 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_0)))) : (((var_8) % (((/* implicit */long long int) var_0)))))));
}
