/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82883
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
    var_13 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) var_1);
                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) / (-4664269529865499763LL)))), (15562857339197843904ULL)));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_3 [i_1])))) ? (((/* implicit */long long int) ((int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [(short)10]))))))))));
                    var_17 = ((/* implicit */unsigned int) arr_0 [(_Bool)1]);
                }
                for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 - 2] [(short)8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_4) : (arr_9 [8LL] [8ULL] [8LL] [i_3])))) : (min((((/* implicit */unsigned long long int) (unsigned short)23311)), (4294967295ULL)))))))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((signed char) max((arr_12 [6ULL] [i_3 - 1]), (arr_12 [(short)10] [i_1 - 1])))))));
                    var_20 = ((((/* implicit */_Bool) max((4664269529865499792LL), (((/* implicit */long long int) (unsigned char)242))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19648))) : (12398353697902678995ULL));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_4 - 1] [6ULL] [6ULL])) ? (10519867419503159292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (((/* implicit */unsigned long long int) (-(2576487170908161288LL)))));
                                var_23 = arr_17 [i_0] [i_4] [i_6];
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10782576127189272791ULL)) ? (1054488446594918533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 3; i_7 < 7; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (6117480666909413629ULL)));
                                arr_30 [0U] [i_8] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) 14318806137781200794ULL);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_19 [4ULL] [7LL] [i_7] [i_7]))));
                    var_28 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) 18446744073709551615ULL))) + (((/* implicit */int) arr_14 [i_0] [i_7] [i_7]))));
                }
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 12479748987919160243ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_29 [i_1] [i_1] [i_1] [i_1] [7]))) / (((((/* implicit */_Bool) (short)12088)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_0)))) % ((+(var_9)))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (5180821287863614091ULL)))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((_Bool) 5098359210133891638ULL));
}
