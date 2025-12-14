/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5892
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((var_16) > (((((/* implicit */_Bool) 7632360961437480140LL)) ? (5419270656522735770LL) : (7632360961437480155LL)))));
                arr_8 [i_0 - 2] [i_0 - 2] [i_0] = (unsigned short)22713;
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_6), (arr_0 [i_0]))))));
                var_21 = ((/* implicit */unsigned short) ((((-7632360961437480153LL) / (((((/* implicit */_Bool) 1044031991518983697LL)) ? (7632360961437480140LL) : (-368567008133528123LL))))) > (min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_15 [i_2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2 - 1] [i_2])) | (((/* implicit */int) arr_11 [i_2 + 3] [i_2]))))), (((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (7632360961437480140LL)))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                            {
                                var_23 = ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_2] [i_2] [i_2 + 1])) ? (arr_20 [i_2] [i_2] [i_4]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1766103055007331949LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_3] [i_2] [i_5 - 1]))) : (arr_20 [i_2] [i_2] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((-(var_13))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((7632360961437480145LL) / (-4311920703653057904LL))))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (var_15)));
                                arr_24 [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 4311920703653057903LL)) ? (((/* implicit */int) arr_21 [i_2 + 4] [i_2 + 1] [i_2 + 4])) : (((/* implicit */int) arr_21 [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                            }
                            var_26 = ((/* implicit */long long int) arr_18 [i_2] [i_3] [i_4] [i_2]);
                            arr_25 [i_4] [i_2 - 1] [i_2] = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                arr_31 [i_7] = (~(((long long int) arr_18 [i_7] [i_7] [i_8] [i_8])));
                arr_32 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (((/* implicit */int) arr_19 [i_8] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_30 [i_7] [i_7]))))) == (-7632360961437480143LL))) ? (min((min((-3298535266076582004LL), (((/* implicit */long long int) (unsigned short)18741)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_16 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_7] [i_7])) == (((/* implicit */int) arr_12 [i_7] [i_8])))))))))));
                var_27 = ((/* implicit */unsigned short) ((arr_0 [i_7]) | (((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_0 [i_8]) : (arr_0 [i_7])))));
                var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_8] [i_8] [i_7] [i_8]))));
            }
        } 
    } 
}
