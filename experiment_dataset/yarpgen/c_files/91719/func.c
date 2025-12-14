/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91719
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]);
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))))) ? ((~(((/* implicit */int) arr_2 [i_1 + 2] [i_1])))) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1])))))));
            var_19 = ((/* implicit */signed char) var_15);
            var_20 = ((/* implicit */signed char) (~((((~(arr_0 [i_0]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_0])))))))))));
                var_22 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1023U)))));
                var_23 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)18] [i_1 + 2] [(signed char)18]))) >= (arr_0 [i_2])))) >= (((((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_2])) - (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    var_24 = ((arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3]) & (((var_11) ? (arr_7 [i_0] [i_2] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_4 [2ULL] [2ULL] [i_3]))))))));
                    arr_11 [i_0] [0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1 + 2] [i_2] [i_1 + 2]) ? (var_14) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 1]))) : (var_13)));
                }
            }
            for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 1) 
            {
                arr_16 [(signed char)1] |= ((/* implicit */unsigned long long int) arr_14 [i_1]);
                var_26 -= ((/* implicit */signed char) var_14);
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_27 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0])))))) != (var_10)));
                arr_20 [i_5] [i_1] [i_1 + 3] [18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (arr_0 [i_0]))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                arr_23 [i_0] [i_1 - 1] [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)29))));
                var_28 ^= ((/* implicit */unsigned char) ((long long int) ((((arr_13 [i_6] [(signed char)8] [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_0] [i_6] [i_0] [i_6])))) * (((/* implicit */int) ((signed char) arr_6 [i_0] [(signed char)14] [i_0] [14]))))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_7] [i_0] = var_5;
            var_29 = ((/* implicit */unsigned char) arr_6 [i_0] [4U] [i_7] [i_7]);
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_25 [i_7] [i_7] [i_7]))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_25 [i_7] [i_7] [i_0]))))) : (((/* implicit */int) (!(var_1))))));
        }
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0]))))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        arr_30 [i_8] &= ((/* implicit */signed char) var_14);
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_15 [i_8] [i_8] [i_8])) : (((9718583677890704830ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) : (1051402853U)))))))));
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_29 [i_8] [i_8])))))))));
    }
    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8479457734992146382ULL)) ? (max((9718583677890704830ULL), (((/* implicit */unsigned long long int) 1073741823U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5495813636917717741LL)) ? (8412238090845454793LL) : (((/* implicit */long long int) 3243564421U)))))))) && (((/* implicit */_Bool) var_2)))))));
}
