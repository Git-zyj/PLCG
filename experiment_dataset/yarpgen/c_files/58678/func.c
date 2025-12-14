/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58678
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
    var_18 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) << (((((int) arr_0 [(unsigned short)20])) - (55)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [(signed char)4] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((min((min((-2062044862), (((/* implicit */int) (short)32713)))), (((/* implicit */int) (short)32705)))) & (1126465692)));
            arr_8 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_6 [i_0 - 1] [i_0 - 1] [i_1])), (arr_0 [i_0])))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0])), (var_12)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) == (((/* implicit */int) arr_4 [i_1])))))))) || (((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1]))));
        }
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                arr_14 [i_3] [i_2] [i_0 + 1] = ((/* implicit */short) ((_Bool) ((((-802941335) + (2147483647))) << (((/* implicit */int) arr_4 [i_2 - 2])))));
                arr_15 [(_Bool)1] [0ULL] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), (max((min((arr_3 [(_Bool)0] [i_2]), (arr_3 [(unsigned short)18] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_9 [17ULL] [17ULL] [17ULL])))))))));
            }
            arr_16 [i_0 - 1] [(short)5] = ((/* implicit */_Bool) ((signed char) var_14));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [6LL] [i_4] = ((/* implicit */short) arr_18 [(unsigned char)12] [(unsigned char)12]);
            arr_20 [8ULL] [(unsigned char)16] = arr_3 [(_Bool)1] [i_4];
        }
    }
    for (int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
    {
        arr_23 [i_5 - 1] [i_5] &= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [16LL] [16LL] [i_5])), (((((/* implicit */unsigned long long int) arr_17 [10] [14ULL])) * (arr_22 [i_5] [i_5])))))) && (arr_4 [i_5]));
        arr_24 [i_5] = ((/* implicit */unsigned short) ((arr_4 [i_5]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_17 [(short)4] [(short)4]))))));
        arr_25 [i_5] = ((/* implicit */long long int) min((((((unsigned int) arr_1 [(short)3])) / (((/* implicit */unsigned int) arr_17 [(unsigned char)4] [(unsigned char)4])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [7LL] [i_5] [i_5]))) < (arr_5 [i_5 + 1]))))));
        arr_26 [(unsigned short)16] [i_5] = ((/* implicit */unsigned short) min((var_10), (((/* implicit */long long int) arr_21 [i_5]))));
    }
}
