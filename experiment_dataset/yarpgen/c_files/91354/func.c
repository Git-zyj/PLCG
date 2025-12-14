/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91354
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
    var_10 *= ((/* implicit */_Bool) var_6);
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_1 [i_0]))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 + 2])))))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-8000490998939314318LL)));
        arr_6 [8LL] &= ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned short) arr_0 [i_1 + 2]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~((-(arr_7 [i_2]))))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (long long int i_4 = 3; i_4 < 13; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_9 [i_2] [i_4]) > (((/* implicit */int) arr_11 [i_2] [8LL] [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_13 [i_2] [i_3]))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_16 [9U])))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_5] [7ULL] [(_Bool)0]))) : ((~(((((/* implicit */int) var_8)) | (arr_9 [2] [0ULL])))))));
                        var_17 = ((/* implicit */signed char) (~(arr_9 [(signed char)0] [(unsigned char)7])));
                        var_18 = ((/* implicit */_Bool) min((var_1), (arr_15 [6ULL] [6ULL] [i_2])));
                        var_19 += ((/* implicit */unsigned int) arr_9 [i_4] [i_5]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) ^ (arr_16 [(_Bool)0])))) ? (min((((/* implicit */long long int) var_6)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1])))))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2] [i_2] [i_2])))))));
    }
}
