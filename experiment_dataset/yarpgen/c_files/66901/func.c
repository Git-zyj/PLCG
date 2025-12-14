/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66901
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */long long int) (_Bool)0)), (-7240253678035016346LL))));
                    arr_9 [18U] [i_0] [i_2] [18U] = ((/* implicit */long long int) var_17);
                    arr_10 [i_0] [i_1] [i_1] [i_2 + 2] = ((/* implicit */signed char) (-((~(arr_2 [i_2 + 4] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39909)))), (arr_11 [(_Bool)0] [i_0 - 1] [i_4 - 1] [i_0 - 1]))) << ((~(-1)))));
                                arr_15 [i_4 + 1] [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_4 [(unsigned char)12] [(unsigned char)12] [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [(signed char)20] [i_4]))))))) ? (min((((/* implicit */int) var_3)), (var_9))) : (max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) 517363731)) ? (((/* implicit */int) var_16)) : (var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
            {
                for (short i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    {
                        arr_24 [i_0] = ((/* implicit */_Bool) 6297372110693408127ULL);
                        arr_25 [9LL] [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) var_1);
                        var_21 *= ((/* implicit */unsigned short) arr_13 [i_7] [i_7 - 1] [i_7] [20] [i_7 + 3] [i_7]);
                    }
                } 
            } 
        } 
        arr_26 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((1323305722025433553ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_11 [(signed char)0] [i_0] [i_0] [i_0])) : (7240253678035016363LL))))))), ((-(((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (unsigned char)17)) : (var_17)))))));
        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ? (var_14) : (((/* implicit */unsigned int) arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_16 [i_0 + 1])) ? (arr_19 [i_0 + 1] [(_Bool)1] [i_0 - 1]) : (arr_19 [i_0 + 1] [i_0] [i_0 + 1]))) : (((/* implicit */int) ((var_15) != (((/* implicit */unsigned int) arr_19 [i_0 + 1] [i_0] [i_0])))))));
        var_23 = ((/* implicit */signed char) ((min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_0 + 1])) : (var_7))))) != ((~((-(((/* implicit */int) (unsigned short)46711))))))));
    }
    var_24 = ((/* implicit */short) var_1);
    var_25 -= ((/* implicit */_Bool) var_18);
    var_26 = ((/* implicit */unsigned char) (-(((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 369461596)))) : (((unsigned long long int) var_17))))));
}
