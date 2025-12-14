/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84592
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 -= ((/* implicit */short) var_3);
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((10302684870992912748ULL), (((/* implicit */unsigned long long int) -1367636299)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((549722259456ULL), (((/* implicit */unsigned long long int) (short)1784))))) ? (((((/* implicit */_Bool) (short)-1784)) ? (((/* implicit */unsigned long long int) 883216809)) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))))) <= (arr_1 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49137)) ? (((/* implicit */int) (short)-19402)) : (-984739815)));
                    arr_16 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_2] [i_2])))) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (-51017328) : (((/* implicit */int) arr_6 [i_1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) var_16))))) ? ((+(var_5))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) 403892624)) : (arr_5 [i_2] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_1]))))), (((((/* implicit */_Bool) 11143888947160501302ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1]))) : (var_5)))));
                    var_20 = -219912172;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_20 [i_1] &= ((/* implicit */short) arr_5 [i_1] [i_1]);
            var_21 = ((((/* implicit */_Bool) arr_17 [i_4])) ? (var_5) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)110)), (2147483647U)))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5 - 4] [i_5 - 2] [i_5])) ? (arr_9 [i_5 - 4] [i_5 - 2] [i_5]) : (((/* implicit */int) (short)0))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_31 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */int) (unsigned short)38799);
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8])) ? (-984739815) : (var_10)));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_1])) ? (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)231)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_2)) : (var_14))) : (((/* implicit */unsigned long long int) ((int) (short)-1784))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22061)) ? (1650879676) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) max((var_13), (((/* implicit */int) arr_13 [i_1]))))) : (max((((/* implicit */unsigned int) var_8)), (2146435072U))))))));
        arr_32 [i_1] = ((/* implicit */short) (-(1395705004)));
    }
    var_25 = ((/* implicit */unsigned long long int) (-(var_13)));
}
