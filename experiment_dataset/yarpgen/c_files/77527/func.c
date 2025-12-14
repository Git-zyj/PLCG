/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77527
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
    var_11 = ((/* implicit */short) (+((+(((/* implicit */int) (short)-18296))))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((long long int) var_2)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 - 3]))));
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 465042765))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) ((arr_1 [i_1] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (max((((/* implicit */short) var_8)), ((short)-18313)))))))))));
        var_16 = ((/* implicit */int) ((max(((+(var_1))), (((/* implicit */long long int) max((var_0), (((/* implicit */int) (_Bool)1))))))) % (((/* implicit */long long int) (-(var_2))))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_15 [i_3])))));
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_3])), (((int) arr_11 [i_3])))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4 - 3] [i_4] [i_5 - 2] [i_5 - 1] [i_5] [i_4 - 3])) * ((+(((/* implicit */int) arr_16 [i_4 - 3] [i_4 - 3] [i_5 - 2] [i_5 - 1] [i_4 - 3] [i_5 - 2]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) 2934507431852102023LL))))), (var_7)))))));
                            var_21 -= ((/* implicit */unsigned int) var_10);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_4] [i_4 - 1] [i_2] [i_7] [i_4 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) > (((/* implicit */int) (short)18301))));
                            var_22 = ((/* implicit */signed char) -2934507431852102048LL);
                        }
                        /* vectorizable */
                        for (long long int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((arr_24 [i_4 - 1] [i_5 - 3]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            var_24 = ((/* implicit */signed char) -7851549403199805443LL);
                            arr_28 [i_4] = 2934507431852102020LL;
                        }
                        var_25 = ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22817))) == (arr_20 [i_4])))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (arr_26 [i_2] [i_2] [i_2] [i_4 - 3] [i_4] [i_2])))))) < (((/* implicit */int) min((((((/* implicit */_Bool) 1816858560U)) && (((/* implicit */_Bool) -685076030)))), (((((/* implicit */_Bool) (short)18305)) || (((/* implicit */_Bool) var_6))))))));
                        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (-1898963628)))) ? ((~(-5800539689829847229LL))) : ((~(-2934507431852102030LL))))) ^ (((/* implicit */long long int) var_2))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_4 + 1] [i_4 - 3] [i_4 - 2])) && (((/* implicit */_Bool) var_1))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_9 - 1] [i_2] [i_4 - 1])) ? (((/* implicit */int) arr_27 [i_9] [i_3] [i_9 - 1] [i_9] [i_4 - 1])) : (((/* implicit */int) var_9))));
                    }
                    for (long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            var_29 = ((long long int) arr_33 [i_3] [i_4] [i_3] [i_11]);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_3] [i_3])))))))) | (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) -2490347651812015140LL)) ? (arr_9 [i_4] [i_10] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            var_31 = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (((((/* implicit */_Bool) var_6)) ? (16652808214322684335ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)638)))))))));
                            var_32 += ((/* implicit */signed char) arr_16 [i_2] [i_2] [i_2] [i_2] [i_10] [i_2]);
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (min((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (arr_8 [i_2] [i_3])))) + (arr_20 [i_2]))), (((/* implicit */unsigned long long int) (+(((((var_1) + (9223372036854775807LL))) << (((((-2934507431852102043LL) + (2934507431852102097LL))) - (54LL))))))))))));
                        }
                        var_34 = ((/* implicit */long long int) (+(((unsigned int) max((((/* implicit */unsigned long long int) var_6)), (arr_20 [i_4]))))));
                        var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (((~(((/* implicit */int) (signed char)101)))) < (((/* implicit */int) min((arr_12 [i_2] [i_2] [i_2] [i_10 - 1]), (arr_16 [i_2] [i_3] [i_3] [i_3] [i_4] [i_10]))))))), (var_5)));
                        /* LoopSeq 3 */
                        for (int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_32 [i_2] [i_4] [i_4]))))) >= (((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_2])), (arr_10 [i_10]))))))) : (((/* implicit */int) (short)-16685))));
                            var_37 = ((/* implicit */signed char) (((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)71)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))))) >= (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_40 [i_4] [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_2] [i_3] [i_2] [i_10] [i_2] [i_10])) && (((/* implicit */_Bool) var_9))))))))));
                        }
                        for (int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                        {
                            var_38 *= ((/* implicit */signed char) arr_9 [i_4] [i_2] [i_4]);
                            var_39 = ((/* implicit */signed char) ((((((/* implicit */int) arr_21 [i_2] [i_4 - 2] [i_4] [i_3] [i_13] [i_10 + 2] [i_2])) ^ (((/* implicit */int) arr_21 [i_2] [i_4 - 2] [i_4 - 2] [i_10] [i_2] [i_10 + 2] [i_10 + 2])))) >= (((/* implicit */int) (short)18283))));
                            arr_45 [i_2] [i_3] [i_4] [i_4] [i_4] [i_3] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-4366)) & (((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_13])) < (((/* implicit */int) ((short) arr_26 [i_2] [i_2] [i_4] [i_4] [i_2] [i_2]))))))));
                            var_40 = (((+(max((arr_22 [i_2] [i_2] [i_2] [i_4 - 2] [i_13]), (((/* implicit */long long int) var_4)))))) + (((/* implicit */long long int) ((/* implicit */int) min(((short)-16680), ((short)14593))))));
                        }
                        for (int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (((+(max((var_1), (((/* implicit */long long int) arr_21 [i_2] [i_2] [i_3] [i_4 + 2] [i_4] [i_10] [i_14])))))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_32 [i_2] [i_3] [i_2]))))))))));
                            var_42 *= ((/* implicit */short) arr_24 [i_3] [i_14]);
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 2) 
        {
            var_43 = (+(var_2));
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) arr_20 [i_16]))));
                            var_45 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))) * (3426028143U))), (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_6), (var_7)))))))));
                            var_46 = ((/* implicit */long long int) (signed char)-112);
                        }
                    } 
                } 
                var_47 = ((arr_5 [i_15 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((16977178387516486822ULL), (((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_15] [i_15] [i_15] [i_15])))) > (((/* implicit */unsigned long long int) (+(-6025209336493646073LL)))))))));
            }
        }
        var_48 += ((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_2])), (arr_34 [i_2])));
    }
}
