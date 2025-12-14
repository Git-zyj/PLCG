/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89780
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
    var_13 = ((/* implicit */unsigned long long int) min((((long long int) min((var_6), (((/* implicit */long long int) 4203314090U))))), (((/* implicit */long long int) (!((_Bool)1))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [(short)21])) : (((/* implicit */int) arr_0 [i_0])))) : (141804468)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [(short)16])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)(-32767 - 1)))))))) : (((min((arr_1 [(_Bool)1] [i_0]), (arr_1 [i_0] [i_0]))) ? ((~(var_9))) : (((unsigned long long int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            var_14 = ((/* implicit */_Bool) ((1657337184) + (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) ((long long int) ((arr_4 [i_0 - 1] [i_1 - 4]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : ((((_Bool)1) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))))))));
                var_16 -= (~(((((/* implicit */_Bool) ((unsigned int) 170010765U))) ? (arr_7 [i_2] [i_0 - 1] [i_2] [i_1 - 3]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) (signed char)-8)) + (16)))))))));
            }
            for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1418177299U))));
                var_18 = ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((short) 9223372036854775807LL))) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (signed char)-1)));
            }
        }
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) | (((/* implicit */int) arr_10 [i_4] [i_4] [3ULL]))));
            /* LoopSeq 1 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_4] [i_5]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [17U] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 1]))) : (var_2)));
                var_21 -= ((/* implicit */unsigned int) ((arr_12 [i_0]) ? (((/* implicit */unsigned long long int) 1418177299U)) : (var_9)));
                arr_17 [i_0] = ((/* implicit */short) 2709461364U);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0 - 2] [i_4 - 2] [i_4 - 2])) == ((~(((/* implicit */int) arr_15 [i_0]))))));
            }
            var_23 = ((/* implicit */unsigned int) (-(arr_9 [i_0 - 1] [i_0 - 1] [i_4 - 2] [i_4 - 1])));
        }
    }
    for (int i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_24 ^= ((/* implicit */unsigned long long int) arr_0 [11ULL]);
        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) 1485543708U)))))), (((((/* implicit */_Bool) 2329249166069179556LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_6] [i_6] [i_6])))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13544)) : (((/* implicit */int) (_Bool)1))))) ? (1545379959U) : (min((1585505922U), (((/* implicit */unsigned int) arr_10 [i_6] [i_7] [i_7])))))), (((unsigned int) (~(2749587369U))))));
            arr_24 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_4 [i_6] [i_7])), (arr_9 [i_7] [i_7] [i_6] [i_6]))), (arr_9 [i_6] [i_6] [i_7] [(_Bool)1])))) ? (min((((unsigned long long int) -1657337184)), (min((((/* implicit */unsigned long long int) arr_6 [i_6] [i_6])), (9328750429415796585ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            var_27 = ((/* implicit */long long int) 4236094035U);
            arr_25 [i_6] = ((/* implicit */long long int) arr_3 [i_6] [i_6] [5]);
            var_28 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1865781872U))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 14765104835767407291ULL)))) % (((9223372036854775803LL) % (((/* implicit */long long int) 2876789996U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7U)) || (((/* implicit */_Bool) var_8))))))));
        var_30 = ((/* implicit */_Bool) ((min((2709461364U), (0U))) / (1865781872U)));
    }
    var_31 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) var_3)))) + (var_10)));
    var_32 += ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), ((~(16383ULL))))));
}
