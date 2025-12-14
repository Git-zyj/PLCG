/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80923
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (+(((/* implicit */int) (short)1536))))) || (((/* implicit */_Bool) 4681334526113462546LL))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned char)221))));
        var_19 = max((((arr_2 [i_0] [i_0]) ^ (var_5))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) < (var_14)))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-((+(arr_1 [i_3]))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) && (((((/* implicit */long long int) ((/* implicit */int) var_7))) == (arr_2 [i_2 - 1] [i_3 + 2]))))))));
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (var_16)));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        {
                            arr_27 [i_7] [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-26799)), (arr_14 [i_1] [i_6] [i_7] [i_8])))), (((((/* implicit */_Bool) arr_16 [i_1] [13LL] [i_6] [i_6] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26803))) : (arr_16 [2LL] [i_2] [0LL] [8U] [i_2] [i_2 + 3] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)221)) + (((/* implicit */int) arr_23 [i_8] [i_7] [i_6] [i_6] [i_2 - 1] [(unsigned char)15])))))));
                            arr_28 [i_1] [i_1] [3ULL] [i_6] [i_7] [(unsigned char)2] = ((/* implicit */unsigned long long int) (short)4088);
                            arr_29 [i_1] [1U] [(short)11] [i_7] [17ULL] = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [6U]))) : (var_15)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) min((arr_10 [i_2] [i_6]), (arr_12 [i_1] [12LL])))) : (max((arr_8 [(short)17] [i_2] [i_6]), (((/* implicit */unsigned long long int) var_12))))))))));
            }
            arr_30 [i_1] [i_1] [i_2] = ((/* implicit */int) (-(17179836416LL)));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (12501307336454006242ULL)))))))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 22; i_9 += 2) 
            {
                for (short i_10 = 3; i_10 < 21; i_10 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) != (((/* implicit */int) min((((/* implicit */short) var_11)), (arr_26 [i_1] [6U] [i_1] [i_10] [i_9 - 2] [i_10 - 1]))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) -6681574760303421869LL)) ? (min((((/* implicit */int) var_2)), (arr_13 [i_1] [i_9 + 1] [(_Bool)1] [i_2 - 1]))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned char)59)) / (((/* implicit */int) var_7)))) > (((/* implicit */int) ((unsigned char) var_11)))))))))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (short)-1537))));
    }
    var_28 = (~(var_5));
}
