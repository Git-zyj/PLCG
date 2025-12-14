/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9019
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_1]) && ((_Bool)0))))) <= (arr_4 [i_1 + 1])))), ((+(((/* implicit */int) ((_Bool) (signed char)-107)))))));
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 3] [(signed char)7] [i_1 + 4])) ? (arr_3 [i_1 + 2] [i_1] [i_1 + 3]) : (arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 1])))) ? (max((var_2), (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1] [i_1 + 2])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) / (arr_3 [i_1 + 3] [(unsigned char)1] [i_1 + 2]))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0])) : (((arr_5 [i_2]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)5]))))))) ? (((((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_2 [5LL] [10])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2])) <= (arr_4 [4])))))) : (((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [(signed char)6])) ? (((/* implicit */long long int) arr_9 [i_1 - 1] [i_1])) : (-8667136063727867279LL)))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1128391964U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (arr_1 [i_1]))))) : (((long long int) arr_9 [i_0] [i_0])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) min((min((arr_4 [i_1 + 2]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((signed char) arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 3])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(signed char)8] [i_3]))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) == (var_7))) ? (((((-8978367321675779730LL) + (9223372036854775807LL))) >> (((arr_4 [i_0]) - (12369848559274037948ULL))))) : (((long long int) (unsigned char)135))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) var_17))), (arr_3 [i_0] [i_1] [i_1 - 1])))) : (((((/* implicit */_Bool) arr_10 [i_3] [(signed char)5] [i_0])) ? (((var_11) ^ (((/* implicit */long long int) arr_17 [i_0] [i_1])))) : (((/* implicit */long long int) arr_7 [8LL] [i_3] [i_3]))))));
                        var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_3])))))))) != ((((~(1821933662U))) ^ (((/* implicit */unsigned int) arr_17 [i_1 + 1] [i_1 + 1])))));
                    }
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_21 [i_3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 768174608)))))));
                        arr_22 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_5 + 3] [i_5 + 3] [(_Bool)0])) ? (((/* implicit */int) arr_20 [i_1 + 1] [i_5 + 1] [i_3] [i_5 - 1])) : (((/* implicit */int) arr_20 [i_1 + 4] [i_5 + 3] [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 + 3])) * (((/* implicit */int) (unsigned short)65531))))) : (268435455U)));
                    }
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                {
                    var_25 -= ((/* implicit */unsigned short) var_3);
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6044615958494181725ULL)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)105))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_0] [i_1 + 2] [i_1])))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_34 [i_7] [i_9] [i_7] [i_7] = (~(arr_3 [i_8] [(unsigned short)11] [i_8 + 2]));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8 + 2])) ? (arr_25 [i_8 + 2]) : (arr_25 [i_8 - 1])));
                }
                var_28 = ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_4 [i_7]))), (((/* implicit */unsigned long long int) arr_12 [i_8 + 2] [i_8 + 2])))) * (max((((/* implicit */unsigned long long int) 8071836120932826648LL)), (min((var_6), (((/* implicit */unsigned long long int) arr_31 [i_7] [i_8 - 1] [(_Bool)1] [i_8])))))));
                var_29 = ((/* implicit */unsigned int) min((arr_14 [i_7]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [7] [i_8 + 2] [i_8])) || (((/* implicit */_Bool) arr_18 [i_8] [12ULL] [i_8 - 1] [(signed char)6] [i_8 + 2] [i_8])))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) var_17);
    var_31 = ((/* implicit */unsigned long long int) (+(var_4)));
}
