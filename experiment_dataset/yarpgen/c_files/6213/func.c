/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6213
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */short) var_10);
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (short)-27948))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) arr_4 [i_0] [i_0]))));
            arr_5 [i_0] [(short)13] [(short)13] = ((/* implicit */int) var_7);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                arr_9 [i_0] [14ULL] [i_0] = (short)-27949;
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (~(arr_6 [i_0] [i_2 + 3] [i_2 + 3] [i_0])));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_0] [i_3] = (~(((/* implicit */int) arr_13 [i_3] [i_2] [i_1] [i_0])));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (4450527557797878208ULL) : (((/* implicit */unsigned long long int) arr_7 [i_3] [i_2 - 1] [i_2] [i_2 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) arr_11 [i_2 - 1])) : (var_3)));
                        var_17 &= (+(1188186314));
                        var_18 *= ((/* implicit */short) ((unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 3] [i_3]));
                        var_19 = ((/* implicit */unsigned char) (~(arr_17 [i_0] [i_4] [(unsigned char)4] [i_4 + 2] [i_4 + 1] [i_0])));
                        var_20 = (~(arr_8 [i_4] [i_4] [i_4 - 1] [i_2]));
                    }
                    var_21 = ((/* implicit */int) (+(((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                }
                var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_2] [i_1] [1ULL]))));
                var_23 += ((short) ((((/* implicit */unsigned long long int) 254)) ^ (6052209758776080204ULL)));
            }
            arr_19 [8] &= ((/* implicit */int) ((((((/* implicit */_Bool) 17313484328517496649ULL)) || (((/* implicit */_Bool) 13996216515911673412ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)182))))) : ((-(4450527557797878208ULL)))));
            arr_20 [14] [18] &= ((/* implicit */int) arr_4 [i_0] [i_1]);
        }
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_12 [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_5]))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_5])), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_5]), (var_0)))))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    {
                        arr_32 [i_8] [i_5] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_30 [i_5] [i_6] [i_7] [i_8] [i_8]) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)162))))))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)203)), (arr_26 [i_7] [i_6] [i_6] [i_5])))) ? (min((((/* implicit */unsigned long long int) (short)1792)), (17313484328517496673ULL))) : (max((var_1), (arr_28 [i_5] [i_6] [i_6] [i_5])))))));
                        arr_33 [i_5] [i_5] = ((/* implicit */int) arr_25 [i_5] [i_5]);
                    }
                } 
            } 
            arr_34 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max(((unsigned char)229), (arr_21 [i_5] [i_6])))), ((-(min((((/* implicit */unsigned long long int) (unsigned char)12)), (12394534314933471403ULL)))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15333387434563081930ULL)) ? (18446744073709551615ULL) : (6052209758776080212ULL)))) ? ((-(min((13996216515911673414ULL), (((/* implicit */unsigned long long int) arr_0 [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))))));
            arr_35 [i_5] [i_5] [i_6] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5] [22] [i_5] [i_5])))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 16; i_9 += 4) 
        {
            var_26 = ((/* implicit */short) min((min((((/* implicit */int) (short)15900)), (((((/* implicit */_Bool) arr_18 [(short)15] [i_9] [i_5] [(unsigned char)8] [i_9] [i_9])) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) (unsigned char)229)))))), (var_11)));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_5]))))) ? (min((402653184), (((/* implicit */int) (short)-1784)))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)190)))))))));
        }
    }
    for (int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_28 ^= ((/* implicit */int) max(((~(min((var_9), (((/* implicit */unsigned long long int) arr_8 [i_10] [i_10] [i_10] [i_10])))))), (((/* implicit */unsigned long long int) max((arr_7 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)118))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            arr_43 [i_10] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_39 [i_11]), (arr_39 [i_10]))))));
            var_29 = ((/* implicit */int) arr_42 [i_10] [i_11] [i_11]);
        }
        var_30 = min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)511))) * (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_1 [i_10])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29159))) : (var_1))));
    }
    var_31 = ((/* implicit */short) var_3);
}
