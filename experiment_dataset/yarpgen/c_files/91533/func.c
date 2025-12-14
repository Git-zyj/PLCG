/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91533
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) -7440190109650756129LL);
            var_11 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [10ULL] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [(unsigned char)11])) : (((/* implicit */int) (_Bool)1)))))), (-4742160598990107463LL)));
            var_12 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0]))))) ? ((-(arr_4 [(unsigned short)5] [(short)15]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_13 = ((/* implicit */int) min((((/* implicit */long long int) arr_0 [i_0] [i_2])), (((((((/* implicit */_Bool) 347327831U)) ? (var_3) : (((/* implicit */long long int) -1652520339)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [(short)15])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)12288)))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_7))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_19 [8LL] [i_5] [i_5] [(unsigned short)2] [i_5] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(arr_12 [i_5] [i_4] [i_3 - 1] [i_0] [i_0])))) : (arr_11 [i_0] [i_0] [i_0] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) min((var_9), ((_Bool)1)))))));
                            arr_20 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_9)), (7793978298878921824LL)));
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [4] [i_2]))) | (min((arr_18 [i_3] [i_3] [i_3] [i_3 - 2] [i_3]), (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))))));
                            var_16 |= ((/* implicit */short) min((0), ((-(((/* implicit */int) (short)295))))));
                        }
                        for (long long int i_6 = 3; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            arr_23 [(unsigned char)2] [8ULL] [i_3] [i_3 + 1] [(signed char)1] [i_6] = ((/* implicit */unsigned long long int) var_5);
                            var_17 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)31))), (arr_18 [10U] [10U] [i_6] [i_0] [i_6 - 3])));
                            arr_24 [i_0] [i_0] [i_2] [4] [i_4] [i_6 + 1] [14ULL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((72057593501057024LL), (((/* implicit */long long int) var_9))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (5746311607264219432LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [(short)12] [i_2])))))), (min((var_10), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_12 [(signed char)11] [i_6 + 1] [4U] [i_6 + 1] [i_6 - 1])))))));
                        }
                        for (long long int i_7 = 3; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned int) min((163784596), (((/* implicit */int) (unsigned short)42508))));
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_2)), ((+(((var_1) >> (((((/* implicit */int) var_5)) - (6288)))))))));
                        }
                    }
                } 
            } 
            arr_27 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
        }
    }
    var_20 |= ((/* implicit */long long int) var_8);
}
