/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6432
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [(signed char)1] &= max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_8)), (var_11)))), (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (var_13))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_1 [i_0 - 1]) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 + 2] [i_1]))))))) >> (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_1] [i_0])), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24)))))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (signed char)43))))) ? (arr_4 [i_0 + 2] [19] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) max(((unsigned short)2499), (((unsigned short) arr_4 [i_0] [i_0] [i_0]))))) : (max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50)))))))));
        }
        for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (-(max((var_13), (((/* implicit */unsigned int) (signed char)-15))))))) : (((unsigned long long int) max((var_1), (((/* implicit */unsigned int) (unsigned char)9)))))));
                arr_12 [i_2] [2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_12))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)2] [1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (arr_6 [i_2 - 1]))))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [7] [i_2] [i_4]))) : (arr_13 [i_2 - 1] [i_2] [i_2] [i_2]))) != (arr_0 [i_2])));
                var_18 = ((/* implicit */int) (~(arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 3])));
                arr_15 [i_0] [i_2] [(signed char)18] [(signed char)12] &= ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0]);
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
            {
                var_19 *= ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) | (var_7)))));
                var_20 = (signed char)102;
            }
            var_21 = ((/* implicit */unsigned int) max((var_21), (((((((/* implicit */int) (signed char)-16)) != (-614450174))) ? (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : (arr_13 [i_0] [i_0] [i_0 - 1] [18ULL])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) + (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) >= (16236903480332227789ULL))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))));
            var_22 = ((/* implicit */signed char) ((4294967289U) != (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)235)))))))));
            var_23 = ((/* implicit */unsigned int) max((max((max((((/* implicit */unsigned long long int) var_2)), (arr_16 [i_0] [i_2 - 1]))), (((/* implicit */unsigned long long int) max(((signed char)15), ((signed char)-56)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2] [i_0] [i_0 + 1])) & (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0 + 2])))))));
        }
        var_24 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (_Bool)1)), ((~(1181146935U))))), (((/* implicit */unsigned int) ((arr_18 [i_0 + 3] [i_0 - 1] [(signed char)7]) >= (arr_18 [i_0 + 3] [i_0 - 1] [i_0]))))));
    }
    var_25 += ((/* implicit */int) var_3);
    var_26 = ((/* implicit */_Bool) (signed char)-19);
    var_27 = ((/* implicit */unsigned short) var_8);
}
