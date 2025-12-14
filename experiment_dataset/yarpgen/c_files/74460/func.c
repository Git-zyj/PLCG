/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74460
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)32745)) - (32722)))))) & (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (var_19)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [9LL] [i_1] = ((/* implicit */_Bool) (-(arr_5 [i_1] [i_0] [(unsigned char)4] [i_1])));
                    arr_7 [i_1] [i_0] = ((((((var_12) == (((/* implicit */unsigned int) var_9)))) && (((/* implicit */_Bool) (-(7207268850622602706ULL)))))) ? (((((/* implicit */_Bool) 0U)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (1810970302U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)40183)) >> (((((/* implicit */int) (short)-4988)) + (5016)))))))) : (2504129585U));
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_0] [(signed char)14] [(unsigned short)6] [i_3] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2 + 3] [(_Bool)1] [i_3 - 3])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [6U] [(short)6])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) % (1790837690U)))) : (max((arr_5 [(unsigned short)0] [(unsigned short)0] [i_3 - 1] [(signed char)14]), (((/* implicit */long long int) (unsigned short)32768)))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_13 [i_0] [14ULL] [i_2] [i_3] [(_Bool)0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            arr_17 [i_1] [i_1] [(unsigned short)3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)37670);
                            arr_18 [i_1] [i_5] = ((/* implicit */unsigned short) arr_11 [i_2] [i_3] [(unsigned short)1]);
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_1 - 1] [i_2 - 1] [i_3 - 1] [i_5] [i_5] [i_1]) << (((8646911284551352320ULL) - (8646911284551352319ULL)))))) ? ((((!(var_6))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9799832789158199274ULL)))))) : (arr_16 [i_0] [i_1] [6ULL] [6ULL] [i_5] [8ULL] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_1 - 1] [i_2 - 1] [i_3 - 1] [i_5] [i_5] [i_1]) << (((((8646911284551352320ULL) - (8646911284551352319ULL))) - (1ULL)))))) ? ((((!(var_6))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9799832789158199274ULL)))))) : (arr_16 [i_0] [i_1] [6ULL] [6ULL] [i_5] [8ULL] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))));
                            arr_20 [i_5] [12] [12] [8] [i_2] [i_3] [(short)12] = ((/* implicit */long long int) var_9);
                        }
                        arr_21 [i_0] [10ULL] [i_0] [2ULL] [4U] [(unsigned short)0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_0 [i_0] [i_3])));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_19);
}
