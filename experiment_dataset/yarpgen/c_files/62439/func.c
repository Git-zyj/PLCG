/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62439
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)109))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) max(((unsigned short)64477), (((/* implicit */unsigned short) (_Bool)1))));
                arr_6 [(unsigned char)3] &= ((/* implicit */unsigned long long int) var_3);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [(short)7] [i_0 - 1] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1329331679U)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (3ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((2965635616U) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                                arr_15 [i_0] [i_1] [i_2 - 1] [(short)3] [i_4] &= ((/* implicit */short) min((137434759168ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) 1217087938))));
                                var_12 = ((/* implicit */_Bool) ((short) -1365254658));
                                arr_16 [8ULL] [i_1] [i_1] [i_2] [i_3] [(_Bool)1] [(unsigned short)9] = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_13 = ((min((max((((/* implicit */unsigned long long int) -1237821103)), (3688162958492376048ULL))), (((/* implicit */unsigned long long int) (signed char)-72)))) & (arr_13 [i_0] [i_0 - 1] [4ULL] [(short)12] [i_5] [(_Bool)1] [12ULL]));
                            arr_21 [10LL] [i_1] [8LL] [i_6] &= ((/* implicit */int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_14 *= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (15626743279467110212ULL))), (((/* implicit */unsigned long long int) arr_25 [i_10] [i_9] [i_7]))));
                                var_15 |= ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_28 [i_7] [i_12] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((~(arr_35 [i_7] [i_13])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned int) (short)9559)), (1329331679U)))));
                            arr_39 [(short)5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [22LL] [i_8])) ? (2965635616U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8] [i_13])))))) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) var_3)))));
                        }
                    } 
                } 
                var_17 -= arr_31 [i_7] [i_7];
            }
        } 
    } 
    var_18 -= ((/* implicit */int) var_5);
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((+(max((4300867653632170566ULL), (((/* implicit */unsigned long long int) -1161259638167909631LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_7))))) % (min((((/* implicit */long long int) var_8)), (var_1))))))));
}
