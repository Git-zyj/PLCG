/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78171
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18668))) ^ (0ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2722871664U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))))))));
        var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned long long int) (short)-18697));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)3] [3LL])) ? (((/* implicit */unsigned long long int) 543269973)) : (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */unsigned long long int) arr_1 [(short)8])) : (13686958156981900838ULL)))));
            arr_8 [i_0] [7LL] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [11] [i_0] [i_1])) / (arr_1 [i_1])))) ? (arr_6 [i_0] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)13278)))));
        }
        arr_9 [i_0] = ((((/* implicit */int) var_5)) / (arr_5 [7U] [i_0] [i_0]));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) (short)-18668)) % (((/* implicit */int) (signed char)9))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [0ULL] [i_3] [i_4]))))) : (arr_13 [i_2] [i_3] [(signed char)5]));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))))));
    var_23 *= ((/* implicit */short) ((((/* implicit */int) ((signed char) ((long long int) var_19)))) % (((/* implicit */int) (!((!(((/* implicit */_Bool) -7360509165173297188LL)))))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            {
                arr_23 [i_5] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-18688)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_21 [i_5] [i_6])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1222766357)) ? (((/* implicit */int) (short)-18707)) : (((/* implicit */int) (_Bool)0))));
                arr_25 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5380018210698283361LL))));
            }
        } 
    } 
}
