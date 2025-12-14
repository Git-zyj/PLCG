/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92171
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1332672008)) ? (((/* implicit */int) (_Bool)1)) : (1332672008)))) ? (max((-1332672008), (((/* implicit */int) (signed char)96)))) : (-1332672017)))), ((+(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (arr_0 [i_0 + 1] [i_0 - 3]) : (((/* implicit */long long int) arr_2 [i_0 - 2] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (-((+(-2104927182)))));
                        arr_11 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1] [i_0 - 1])))) * (((arr_0 [i_0 - 3] [i_1]) / (arr_0 [i_0 - 1] [i_1])))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(arr_2 [i_4] [(short)5])))), (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */long long int) -615422999)) : (6611832811903339302LL)))))) ? (((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (arr_1 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_10 [i_4] [(signed char)6])) > (arr_2 [i_4] [i_4]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-97)))))) : (max((arr_1 [i_4] [i_4]), (((/* implicit */long long int) arr_7 [i_4]))))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) min((arr_4 [i_4] [i_4]), (arr_4 [i_4] [i_4])))))))));
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (arr_1 [i_4] [i_4]) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(unsigned char)1] [i_4] [i_4])) - (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])))))));
        var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [18] [i_4])) ? (arr_0 [i_4] [19U]) : (((/* implicit */long long int) arr_10 [i_4] [(unsigned short)10]))))) ? (((((/* implicit */_Bool) (short)-24258)) ? (((/* implicit */long long int) arr_2 [i_4] [i_4])) : (var_14))) : (((/* implicit */long long int) min((arr_2 [i_4] [i_4]), (((/* implicit */unsigned int) 2147483647)))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)97)) < (361541356)));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 4; i_6 < 10; i_6 += 3) 
        {
            arr_21 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32765)))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((int) (signed char)98)))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        {
                            arr_30 [i_5] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_5] [6U] [i_5]))));
                            var_25 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_7] [i_8]))))) >> (((((((/* implicit */_Bool) arr_23 [i_5] [i_6 + 1] [i_8] [i_5])) ? (((/* implicit */int) arr_23 [i_9 - 2] [i_8] [i_7] [(unsigned short)7])) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_9 - 2])))) - (25016)))));
                            var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 - 4] [i_7])) ? (((/* implicit */long long int) arr_25 [i_5] [i_7] [i_8] [i_8])) : (arr_12 [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7] [i_8])))))) : ((~(arr_6 [i_5]))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_27 -= ((/* implicit */unsigned int) max(((short)-1346), ((short)-7035)));
                    arr_35 [i_5] [i_6] [i_7] [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_28 [i_5] [i_6 - 1] [i_7] [i_5] [i_6 - 1] [i_6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (arr_15 [i_5]))))) : (((((/* implicit */_Bool) var_18)) ? (arr_0 [i_5] [(signed char)18]) : (arr_6 [i_6 - 1])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_5] [i_5]) <= (((/* implicit */int) arr_32 [i_5] [(unsigned short)0] [i_5] [(unsigned short)0] [i_6])))))) >= (((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_24 [i_5] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_11] [i_5] [i_5] [i_5])))))));
                    arr_38 [i_5] [i_6] [i_7] [(unsigned short)6] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_6] [i_7] [i_7] [i_6] [i_6])) ? (((/* implicit */int) arr_32 [i_5] [i_6] [i_7] [i_11] [i_6])) : (((/* implicit */int) arr_32 [i_5] [i_6] [i_5] [i_11] [i_6]))));
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    arr_41 [i_6] [i_6] [i_6] [i_6] = (~(arr_5 [i_6] [i_6 - 3]));
                    var_29 = ((/* implicit */short) ((unsigned int) arr_2 [i_6 - 4] [i_6 - 1]));
                    var_30 ^= ((/* implicit */signed char) ((((var_12) + (2147483647))) >> (((((/* implicit */int) arr_34 [i_5] [i_7] [i_7])) - (10391)))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1332672016)) ? (-5953739026108585047LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_42 [i_5] [i_7] [2ULL] [i_12] [i_7] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_5] [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 1] [i_6 - 3]))));
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_32 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [1U] [i_6])))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_6 - 1] [i_6 - 1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -1026522396)) : (5538959U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_6 + 1] [i_5] [0U])))));
                    }
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_24 [i_5] [i_6 - 1] [i_7] [i_13])))) ? (arr_1 [i_5] [i_6 - 3]) : (((long long int) arr_25 [i_5] [i_5] [i_5] [i_5])))))));
                }
                arr_47 [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27330)) ? (arr_0 [i_6 - 3] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)13085)))))) ? (((/* implicit */int) (_Bool)1)) : (((int) 1026522396))));
            }
            arr_48 [i_6] = ((/* implicit */signed char) ((unsigned int) max((arr_10 [i_6 - 2] [i_6]), (arr_10 [i_6 - 1] [i_6]))));
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_5] [i_6 - 1])) ? (arr_0 [i_6] [i_6 - 4]) : (arr_0 [i_5] [i_6 + 1]))))))));
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    for (short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_53 [i_6] [i_6 - 4] [i_6] [i_16] [i_17])) ? (arr_13 [i_15]) : (((/* implicit */unsigned long long int) 3)))) <= (((/* implicit */unsigned long long int) (~(0)))))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_16 [i_5] [i_6])), (arr_6 [(signed char)7]))), (max((((/* implicit */long long int) 127)), (arr_24 [i_16] [i_5] [i_5] [i_5])))))) : (max((((/* implicit */unsigned long long int) 2147483647)), (536870911ULL)))));
                            arr_59 [i_17] [i_6] [i_15] [i_6] [i_5] = max((max((((/* implicit */long long int) arr_31 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 4] [i_6] [i_6])), ((+(arr_0 [i_15] [i_17]))))), ((-(((((/* implicit */_Bool) arr_9 [i_5] [20] [20] [20])) ? (((/* implicit */long long int) 4294967288U)) : (arr_53 [i_6] [5] [9LL] [i_15] [i_17]))))));
                            var_37 = ((/* implicit */short) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_15] [i_5])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_5] [i_5] [i_5] [i_5] [i_17]))))))));
                        }
                    } 
                } 
            } 
        }
        arr_60 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((int) arr_49 [10LL] [i_5] [i_5]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_57 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_49 [10ULL] [10ULL] [10ULL])))) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_5] [i_5] [i_5] [i_5])) == (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
    }
    var_38 = ((/* implicit */short) (((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (max((((/* implicit */long long int) var_3)), (var_14))))))));
}
