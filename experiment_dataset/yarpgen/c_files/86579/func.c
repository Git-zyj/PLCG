/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86579
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((823961876U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)20078))))) - ((+(823961876U)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((3471005429U) & (3471005415U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)220)) << (((((/* implicit */int) (unsigned short)62374)) - (62370)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) + (var_7))))))));
            arr_6 [i_0] [(signed char)11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)14] [21]))))) : (((((/* implicit */_Bool) arr_3 [16LL] [(_Bool)1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0]))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                arr_11 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_13) > (((/* implicit */int) var_3)))))));
                var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)3162)) : (((/* implicit */int) var_0))))));
            }
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
            {
                arr_15 [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_20 [0LL] [17U] [(_Bool)1] [i_0] [(short)16] [7LL] [(signed char)13] = (!(((/* implicit */_Bool) ((arr_10 [(short)21] [14LL] [(_Bool)1]) ? (var_16) : (((/* implicit */unsigned int) arr_12 [i_0] [(_Bool)1] [(_Bool)1]))))));
                            arr_21 [12] [(signed char)12] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1] [9U] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_13 [(signed char)12] [(unsigned char)5])))))));
                        }
                    } 
                } 
                arr_22 [(short)8] [(short)3] [(unsigned char)11] [i_0] = ((/* implicit */unsigned short) (+(((823961853U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3471005420U))))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_5)) : (var_7))) - (1275344479LL))))))));
            }
            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
            {
                var_23 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50383))) >= (3471005443U))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((arr_24 [i_1] [18LL]) / (((/* implicit */unsigned int) 881245183)))))))));
                    var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)20078))) > ((-9223372036854775807LL - 1LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (unsigned short i_9 = 2; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */long long int) 530548794U)) | (1550272368957799733LL))) << (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1]))) : (var_4))))))));
                        var_27 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_8 [(unsigned short)17] [(_Bool)1] [(short)9] [17ULL]))))));
                        var_28 |= (~(((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned short)15152)) - (15133))))));
                    }
                } 
            } 
            arr_32 [i_0] [20] [8ULL] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_8 [(short)3] [(signed char)15] [(short)4] [2LL])) > (((/* implicit */int) arr_16 [18ULL] [11LL] [(signed char)18] [0U]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)20047)))))));
        }
        arr_33 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) % (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_6)))))));
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_12))))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_16)) ^ (var_4)))))))))));
}
