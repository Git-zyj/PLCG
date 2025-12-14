/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97879
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((unsigned long long int) var_6)) >> (((/* implicit */int) ((unsigned short) ((_Bool) var_6))))));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(max(((!(((/* implicit */_Bool) 9223372036854775807LL)))), (((arr_6 [i_0] [i_1 + 1]) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_2] [i_0]))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5)))) ? ((+(9223372036854775807LL))) : (max((-9223372036854775807LL), (((/* implicit */long long int) (unsigned char)56)))))), (((/* implicit */long long int) var_3))));
    var_13 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) ((_Bool) var_7))), ((-(var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_12 [i_3] [i_4])), (arr_5 [i_3] [i_3]))) + (((/* implicit */long long int) ((arr_12 [i_3] [i_4]) ? (((/* implicit */int) arr_4 [(unsigned short)7] [(signed char)16] [i_4])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3]))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) var_7);
                    arr_20 [i_3] [i_4] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_4]))))));
                    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_6 [i_5] [i_4])))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)67)), (var_9)))) ? (max((-9223372036854775786LL), (((/* implicit */long long int) (unsigned char)150)))) : (((/* implicit */long long int) ((1895709809) / (((/* implicit */int) var_9)))))))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_1 [i_3]), (1895709809))), (((/* implicit */int) ((unsigned char) -2147483634)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) % (arr_2 [i_4])))) ? (((/* implicit */int) (unsigned short)36470)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_5 [i_3] [i_4])))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_4] [i_3]))))) : (9223372036854775807LL)))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_3] [4LL] [i_4] [i_6])))))));
                    var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_7 [i_4] [i_6])) ? (arr_7 [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-9223372036854775807LL), (((/* implicit */long long int) arr_15 [i_3] [(unsigned short)4]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)68)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)4] [i_4] [i_4] [i_4])))))))) : (((/* implicit */int) arr_8 [i_4] [i_4] [9LL] [i_3]))));
                arr_24 [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-53)), (9223372036854775807LL)))) ? (arr_2 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_4] [i_4]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190)))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (max((36028247263150080ULL), (var_4))))) - (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned short)256)))))))))))));
            }
        } 
    } 
}
