/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57752
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)66))))), (((short) (~(((/* implicit */int) arr_0 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((int) min((max((var_3), (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_4]))))))));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_4 - 3] |= ((/* implicit */long long int) var_15);
                                var_22 ^= ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        arr_14 [i_5] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_13)))));
        var_23 = ((/* implicit */int) ((unsigned int) 644506989));
    }
    var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((signed char)76), ((signed char)-67)))), (var_4)))) : (min((((((/* implicit */_Bool) 1879773016774665494ULL)) ? (2658937232719329265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21980))))), (5301766223286598201ULL)))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (3945527657U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83)))))) ? (max((var_4), ((-(var_6))))) : (((((unsigned int) var_10)) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 21; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (2147483647) : (2147483647))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 23; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)-66))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_10)))))));
                            arr_27 [i_6] [i_6] [i_6] [i_8 + 1] [i_7] = ((/* implicit */short) arr_25 [i_7] [i_8]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        arr_30 [i_10] = ((/* implicit */_Bool) max(((+(((var_6) << (((var_13) - (2932482089414110695ULL))))))), (((/* implicit */unsigned int) min(((unsigned short)28231), (((/* implicit */unsigned short) (signed char)89)))))));
        var_28 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((_Bool) var_9))) << (((max((arr_17 [i_10] [(_Bool)1] [2]), (((/* implicit */long long int) arr_0 [i_10] [i_10])))) - (8058514958312327541LL))))), ((+(((/* implicit */int) arr_15 [i_10] [i_10 - 1]))))));
        var_29 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_18))))));
    }
    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        var_30 ^= ((/* implicit */_Bool) min(((-(((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) min(((+(9223372036854775807LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [18ULL]))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) | (3945527646U)))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7384470025163594201LL)))));
                    arr_38 [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (5ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    arr_39 [i_11] [9U] [i_13] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_11] [i_12])))))));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (signed char)66))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned short) ((int) ((unsigned short) arr_7 [i_11])));
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) var_12))));
    }
}
