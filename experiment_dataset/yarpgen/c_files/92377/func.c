/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92377
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
    var_16 = ((/* implicit */signed char) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned long long int) (-2147483647 - 1));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */short) (+((-(((/* implicit */int) (signed char)114))))));
                                var_19 = ((/* implicit */unsigned short) (signed char)39);
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (short)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) - (131071U)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((31ULL) >> (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)90)))) - (49)))));
                        var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) max((131047U), (131100U))))))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((131092U), (((/* implicit */unsigned int) (_Bool)1))))) && (((/* implicit */_Bool) -71863725)))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
    {
        arr_15 [i_6] = ((/* implicit */unsigned int) (-(31ULL)));
        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
        arr_16 [i_6 + 2] = ((/* implicit */unsigned long long int) (unsigned short)6851);
        var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)7))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_26 = max((((2010862205U) - (1466447307U))), (min((4294836203U), (4294836203U))));
            arr_23 [i_7] [i_7] [i_8] = ((/* implicit */signed char) max(((~(904604426205514180ULL))), (((/* implicit */unsigned long long int) (-(-1281035296349762928LL))))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (max((((/* implicit */unsigned long long int) ((3368952268U) + (((/* implicit */unsigned int) 71863705))))), (((((/* implicit */unsigned long long int) 2668315702U)) + (18446744073709551608ULL)))))));
                        arr_29 [7U] [7U] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)58680)))), (min((((/* implicit */unsigned int) (signed char)-91)), (131071U)))));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((((789491052U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47861))))) / (((2668315702U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((11115847511651986578ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34600)))))) >> (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)15))))));
        }
        var_30 &= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)47871)))) - ((~(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_31 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (unsigned short)17675)), (4294836180U))), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))));
                    var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2677949854U)), (max((-10LL), (((/* implicit */long long int) -1))))));
                }
            } 
        } 
    }
}
