/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68665
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) 433714396))));
                arr_4 [i_0] [i_1] = ((/* implicit */int) (+(var_5)));
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 6; i_2 += 2) 
                {
                    arr_9 [i_2 - 2] [i_1 - 2] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_2] [8U] [i_0])) >> ((((~(arr_5 [i_0] [(signed char)3] [i_1 + 1] [i_2]))) + (5810053094955506529LL))))) + (((/* implicit */int) (_Bool)0))));
                    arr_10 [i_0] [i_2 - 1] [5ULL] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1 + 2] [i_2] [2U]);
                    var_12 = ((/* implicit */unsigned int) ((19ULL) >> (((((/* implicit */int) (short)22184)) - (22131)))));
                }
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-6410274893286793071LL), (((/* implicit */long long int) -177446960))))) ? (min((3784064484U), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) (~(851854607)))) ? (var_5) : (((/* implicit */unsigned int) ((-1137677560) % (((/* implicit */int) (short)-26174)))))))));
                }
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 7; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_5] [i_1] |= ((/* implicit */int) ((min((0LL), (((/* implicit */long long int) var_0)))) < (((((/* implicit */_Bool) arr_13 [i_6])) ? (arr_2 [i_6]) : (((/* implicit */long long int) 2133829554))))));
                                var_15 -= ((/* implicit */int) (!(((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_4 + 3] [i_6]))) || (((/* implicit */_Bool) min((18354737517260867462ULL), (((/* implicit */unsigned long long int) var_10)))))))));
                                arr_21 [i_0] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_9)) >= (min((var_8), (((/* implicit */unsigned long long int) -595764155)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_4 + 1])))) || (((/* implicit */_Bool) arr_18 [i_4] [i_1 + 1] [i_4] [i_4] [i_6] [i_4 - 1] [i_0])))))) : (min(((~(var_7))), (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 2) 
    {
        var_16 = ((/* implicit */_Bool) 7112642314143724864ULL);
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        arr_34 [i_7] [i_7] [i_9] = ((/* implicit */_Bool) var_6);
                        arr_35 [i_9] [5] [i_9] [i_10] [7ULL] = ((signed char) (!(((/* implicit */_Bool) 458826920U))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) var_2);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)112)), (var_5)))) && ((!(((/* implicit */_Bool) arr_22 [i_7 - 3] [i_7]))))))))))));
    }
    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_12 = 3; i_12 < 19; i_12 += 3) 
        {
            arr_42 [i_11] [i_11] = (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 4294967276U)))))));
            var_19 += ((/* implicit */unsigned short) ((-177446960) == (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) 831151523U)))))));
        }
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (-855845753))))) % (arr_40 [i_11 - 1] [i_11 + 3])))) % (((((/* implicit */_Bool) arr_40 [i_11 + 3] [i_11 + 3])) ? (((((/* implicit */_Bool) -1137677577)) ? (var_7) : (((/* implicit */unsigned long long int) 1137677566)))) : (3558573370405361204ULL)))));
    }
}
