/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80593
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 |= ((/* implicit */_Bool) arr_0 [i_2] [i_4]);
                                arr_13 [i_3] = ((/* implicit */int) arr_12 [i_3] [i_3]);
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2052204779)) ? (((/* implicit */int) arr_5 [13LL] [i_2] [i_2])) : (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) arr_4 [i_4] [i_2])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)23764))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_6 [i_0])) > (((unsigned int) (!(((/* implicit */_Bool) 4294967295U))))))))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_15 [i_1 - 1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (int i_9 = 1; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [(unsigned char)2])) ? (14041922270438718827ULL) : (arr_8 [i_1 + 1] [i_1 + 1]))))));
                                var_24 |= ((/* implicit */unsigned long long int) ((_Bool) min((arr_7 [i_8]), (arr_7 [i_7]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (unsigned short)18161)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967280U)) ? (14041922270438718834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))))) ? (((/* implicit */int) ((signed char) (signed char)-2))) : (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned char)248)))))))) : (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_10] [i_1 - 1])) ? (arr_10 [i_1 + 1] [(unsigned char)4] [i_7] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                        var_26 = ((/* implicit */_Bool) ((((unsigned long long int) arr_16 [i_1 + 1])) >> (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_16 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) var_3);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4404821803270832805ULL)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned char)244))));
                        arr_33 [i_11] [i_7] [i_1] [i_0] = ((/* implicit */unsigned int) ((min((988642283), (((/* implicit */int) (unsigned char)11)))) >> (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)1))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_7] [i_1])), (var_11)))) ^ (min((arr_30 [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) arr_12 [i_7] [i_0]))))))));
                        arr_36 [i_0] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7] [i_12] [i_12])) || (((/* implicit */_Bool) arr_10 [i_12] [i_7] [2ULL] [i_0])))) ? (-2936458184881818943LL) : (((long long int) var_17))))) || (((/* implicit */_Bool) arr_28 [i_0] [i_1] [14U] [i_7] [i_7] [i_7])));
                        var_30 = ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (short)32766)));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                {
                    arr_45 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) 4404821803270832788ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (1950571889U)));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_31 &= ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_23 [i_13 + 1] [i_13 + 1] [i_13 + 1]), (arr_23 [i_13 + 1] [i_13 + 1] [i_13 + 1]))))));
                        var_32 = -9223372036854775793LL;
                        var_33 = (unsigned char)247;
                    }
                }
            } 
        } 
    } 
    var_34 ^= ((/* implicit */long long int) var_0);
}
