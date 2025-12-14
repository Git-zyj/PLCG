/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64004
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19189))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) max(((short)-9474), ((short)-19190))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-((+(-8930480015746843668LL))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (short)2212)) | (((/* implicit */int) (short)19189))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) arr_2 [(short)19] [i_1] [i_0]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(4235688300U)))) ? (((arr_6 [i_0] [i_1] [i_2 + 1] [i_3] [i_2 - 2]) ^ (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (arr_6 [i_0] [i_3] [i_3] [i_3] [(short)20]))))))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) arr_5 [(signed char)7] [i_1] [i_2] [(signed char)7]))))) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_1] [(short)6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_0] [i_1] [i_2 - 2] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_2])))));
                    }
                } 
            } 
        }
        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            arr_10 [i_0] [i_4 + 1] = ((/* implicit */signed char) var_6);
            var_17 = ((/* implicit */short) ((var_5) ? (((((/* implicit */_Bool) 17603673223559169518ULL)) ? (var_8) : (((/* implicit */unsigned long long int) 14U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_3) ^ (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [(signed char)10] [i_0 - 1] [i_4])))) > (min((var_3), (var_3)))))))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_9))));
            var_19 = ((/* implicit */long long int) ((unsigned short) arr_1 [i_0 - 2] [i_4 + 3]));
        }
        var_20 += ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 4; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_5 - 3])) ? (((((/* implicit */_Bool) arr_11 [i_5 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((arr_3 [i_5]) | (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) arr_8 [i_5 + 1])) != (((((/* implicit */unsigned long long int) 4294967282U)) - (var_0)))))))));
        var_22 = ((/* implicit */short) var_9);
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_0))));
    }
    for (unsigned int i_6 = 4; i_6 < 10; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6]))) : (arr_6 [i_6] [i_6] [i_6] [7U] [i_6]))))) ^ (((((/* implicit */_Bool) arr_16 [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-19190)))))) : (arr_8 [i_6 - 4])))));
        var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (arr_8 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19189))))), (((((/* implicit */unsigned long long int) min((arr_5 [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 2]), (((/* implicit */long long int) arr_17 [i_6]))))) - (((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)16] [i_6 - 2] [i_6 + 2])))))))));
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 - 3] [12] [i_6] [19U])) ? (((/* implicit */int) arr_15 [i_6] [i_6])) : (((/* implicit */int) arr_4 [(short)12] [13] [i_6]))))))));
    }
}
