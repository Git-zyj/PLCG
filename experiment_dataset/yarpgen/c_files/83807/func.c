/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83807
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
    var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) var_8))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((var_11) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)15)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-2147483647 - 1))) >= (arr_0 [i_0 - 1] [i_0 - 2])));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_1 - 1] = ((/* implicit */signed char) var_3);
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                var_15 += ((/* implicit */int) ((unsigned short) 16320));
                var_16 = ((/* implicit */unsigned long long int) ((int) (signed char)(-127 - 1)));
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) arr_7 [i_0] [i_1])))) <= (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (signed char)-124))))));
            }
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) ((arr_3 [i_1 - 1] [i_0 - 2] [i_3]) ^ (((/* implicit */int) (unsigned short)64385))));
                var_19 = arr_9 [i_0] [i_1] [(_Bool)1] [i_3];
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_10)))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_3] [i_1 + 1])))))));
                var_21 = ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 1])) ? (((((/* implicit */_Bool) var_9)) ? (12364369596941817626ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 1] [i_1 + 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [(unsigned short)7] [i_0])) ? (((/* implicit */int) var_2)) : (-1)))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) var_0)))))));
            }
            for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                arr_14 [(unsigned char)8] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)37789))));
                var_23 = ((/* implicit */short) arr_11 [i_0] [i_1] [i_4 + 1]);
                arr_15 [i_4] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)255)))) / (((int) var_7))));
            }
            arr_16 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) -1);
        }
    }
    for (short i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)62800))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_5] [i_5] [(unsigned short)19])) : (1254347887)))) ? ((+(((/* implicit */int) (unsigned char)57)))) : (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_5 - 1] [i_5] [i_5] [20LL]))))))));
        arr_20 [i_5] [i_5 - 2] = ((/* implicit */short) (((-(((int) var_0)))) * (((((/* implicit */int) var_9)) * (((((/* implicit */int) var_2)) / (var_5)))))));
        arr_21 [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)37789)) ? (-1254347887) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (signed char)127))));
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 10224983653791599830ULL))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (1258185185) : (((/* implicit */int) (short)-22357))))))));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            arr_27 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) (!(((((/* implicit */int) arr_11 [i_6] [i_6] [i_7 - 1])) == (22))))))));
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7])) || (((/* implicit */_Bool) (unsigned char)7))))))))));
        }
        for (short i_8 = 2; i_8 < 15; i_8 += 2) /* same iter space */
        {
            var_26 = ((((/* implicit */_Bool) 8854651188201980069ULL)) ? (((/* implicit */unsigned long long int) 465057210U)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) var_5)) ? (8854651188201980096ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) (unsigned short)27734))))))));
            arr_30 [i_6] [i_6] [i_8 + 2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) arr_4 [i_6] [i_8]))) ? (min((var_10), (((/* implicit */unsigned long long int) arr_13 [i_6] [i_8 - 2] [i_8] [i_6])))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) (signed char)-7))))))), (((/* implicit */unsigned long long int) (unsigned char)0))));
            arr_31 [i_6] [i_8] = ((/* implicit */short) (signed char)(-127 - 1));
            arr_32 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6] [21])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_6] [i_6] [i_8] [i_8])), ((unsigned short)24937)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (18446744073709551615ULL))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (unsigned short)9888)) ? (0) : (-1)))));
        }
        for (short i_9 = 2; i_9 < 15; i_9 += 2) /* same iter space */
        {
            arr_35 [i_6] = ((/* implicit */long long int) (((~(((/* implicit */int) var_9)))) >= (((((((/* implicit */_Bool) (unsigned char)0)) ? (601766561) : (((/* implicit */int) (unsigned short)27734)))) - (arr_3 [i_6] [i_6] [i_6])))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (87111953) : (((/* implicit */int) (unsigned short)65534))));
        }
        arr_36 [i_6] [i_6] &= ((/* implicit */signed char) var_7);
    }
}
