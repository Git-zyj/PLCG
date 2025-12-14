/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64725
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
    var_10 += ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_2)))), (((((/* implicit */int) (unsigned short)29835)) - (((/* implicit */int) (unsigned char)238)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0 + 3]))))), (arr_7 [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)18)) <= (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)178)))))))));
                            var_12 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)35768), (((/* implicit */unsigned short) arr_2 [i_3])))))) % (4611686018418999296LL))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41208)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */unsigned long long int) var_2);
                                var_14 = ((unsigned short) arr_11 [i_1] [i_0] [i_0] [i_0 + 1] [i_1]);
                                var_15 = ((/* implicit */unsigned char) (unsigned short)598);
                            }
                            var_16 = min((((long long int) var_8)), (((long long int) (signed char)(-127 - 1))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    var_17 ^= ((/* implicit */int) var_9);
                    var_18 ^= ((((var_8) * (((/* implicit */unsigned long long int) 524032)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (arr_1 [i_0 + 2]))))));
                    arr_16 [(_Bool)1] |= ((/* implicit */long long int) (unsigned char)52);
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (-4611686018418999296LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)196)) - (196)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((707886495279444075LL) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_0 + 1] [i_0 + 1] [i_6]))))))));
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65520)) == (((/* implicit */int) min((max((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_1] [i_7] [i_1])), ((unsigned short)20058))), (arr_20 [i_0 + 2] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((min((max((arr_21 [i_7] [i_8]), (((/* implicit */unsigned long long int) (unsigned char)46)))), (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0] [i_0] [i_0 + 3] [(_Bool)1] [i_0]), (((/* implicit */unsigned short) arr_11 [i_7] [i_7] [i_7] [(short)7] [i_1]))))))), (((/* implicit */unsigned long long int) min((min((-707886495279444075LL), (((/* implicit */long long int) (unsigned short)65520)))), (max((((/* implicit */long long int) (unsigned short)35701)), (-6018362816884487832LL))))))));
                                var_23 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_9)))), (var_8))), (((/* implicit */unsigned long long int) var_6))));
                            }
                        } 
                    } 
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((arr_21 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                    arr_29 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_10] [i_0]);
                }
                arr_30 [i_0] [(unsigned char)4] |= ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_2 [i_1])), (arr_11 [i_0 + 2] [i_0] [i_1] [i_1] [(_Bool)1])))), (max((5730848129368409238LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)3)), (arr_22 [i_0] [i_1] [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    arr_33 [i_1] [i_1] [i_11] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (unsigned short)29835)) & (((/* implicit */int) (unsigned short)61763)))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) / (((/* implicit */int) (short)-32554))))) || (((/* implicit */_Bool) (unsigned char)57))));
                    arr_34 [i_1] = ((/* implicit */unsigned short) ((signed char) arr_15 [i_0] [i_0] [i_0 + 1]));
                    var_26 += ((/* implicit */_Bool) arr_22 [i_0] [(unsigned char)20] [(unsigned char)6] [i_11]);
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) & (((/* implicit */int) arr_12 [i_1] [i_0 - 1] [i_0] [17LL] [i_1]))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) var_0)), (max((((/* implicit */unsigned short) var_1)), ((unsigned short)42259))))), (((/* implicit */unsigned short) var_0))));
}
