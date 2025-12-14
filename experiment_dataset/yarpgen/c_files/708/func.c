/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/708
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_13);
                arr_7 [i_0] [i_1] = ((((arr_3 [i_1] [i_0] [i_1]) * (17833588178182055381ULL))) % (((/* implicit */unsigned long long int) ((unsigned int) 613155895527496234ULL))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_18 = (+(max((((/* implicit */unsigned long long int) (+(arr_10 [i_0] [i_1] [i_2] [i_2])))), (1229428179385983681ULL))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (var_9)));
                        var_20 = ((((/* implicit */_Bool) max(((~(var_0))), (arr_1 [i_0] [i_2])))) ? (((((/* implicit */_Bool) 17217315894323567906ULL)) ? (((/* implicit */unsigned long long int) 792766320U)) : (12623964674037377395ULL))) : (((((((/* implicit */_Bool) 2649061063424644235ULL)) ? (arr_4 [i_1]) : (var_13))) >> (((4294967295U) - (4294967250U))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_5 [i_0])) / (18446744073709551615ULL))))));
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (arr_12 [i_4 + 1] [i_1] [i_4 - 2] [i_4 - 1] [i_1] [i_4 + 1]) : (var_16))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_18 [i_1] [i_1] [i_1] = ((unsigned long long int) var_12);
                    arr_19 [i_1] [6ULL] [i_1] = (-(((((/* implicit */_Bool) 4005404664U)) ? (((/* implicit */unsigned long long int) var_3)) : (var_10))));
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_24 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) 5740411601155591549ULL);
                            var_23 = ((((/* implicit */_Bool) ((((unsigned long long int) var_13)) / ((-(var_13)))))) ? (((0ULL) >> (((var_13) - (15692798376919378691ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((12392275379732709912ULL) * (arr_16 [i_0])))) ? (var_9) : (var_3)))));
                            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((0U) >> (((arr_20 [i_0] [17U] [i_0]) - (12525271057603066908ULL)))));
                        }
                    } 
                } 
                arr_26 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (6311134777509570340ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1])) ? (var_11) : (880826150U))) : (((unsigned int) var_11))))), (((((/* implicit */unsigned long long int) var_9)) * (9310232426477718691ULL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        arr_29 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_28 [i_8])))) & (arr_27 [i_8])))) ? ((+(var_10))) : (((((3258032557U) == (3786808004U))) ? (((((/* implicit */_Bool) var_0)) ? (var_17) : (var_17))) : (((((/* implicit */_Bool) 10225681913729844971ULL)) ? (var_4) : (4126040986337626890ULL))))));
        /* LoopNest 3 */
        for (unsigned int i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        arr_37 [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_8) | (var_0))))));
                        var_24 = ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (15690339609817773186ULL) : (var_13))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 4) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned int) var_12);
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_14] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((arr_32 [i_8] [i_12] [i_14]) >> (((439967008U) - (439966994U)))))) : (((unsigned long long int) 17217315894323567906ULL))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 3256931729U))) : (9112273101872815018ULL));
                        arr_46 [14U] [14ULL] [i_13] [i_14] = ((/* implicit */unsigned int) (-((+(((((/* implicit */unsigned long long int) var_5)) * (var_13)))))));
                    }
                } 
            } 
        } 
        arr_47 [i_8] [i_8] = (-(arr_45 [i_8] [i_8] [i_8] [i_8]));
        var_27 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4)))));
    }
    for (unsigned int i_15 = 2; i_15 < 17; i_15 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_6) - (17833588178182055381ULL))), ((~(var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 289562639U)) : (9500275776015286972ULL)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 0U)) : (5165041963782407204ULL))) : (((/* implicit */unsigned long long int) ((var_8) & (arr_33 [i_15] [i_15 - 1] [i_15])))))) : (arr_27 [i_15 - 2])));
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 14; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    {
                        var_29 = ((((unsigned long long int) max((((/* implicit */unsigned long long int) arr_51 [i_17])), (var_10)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_16])) ? (var_10) : (arr_49 [i_15])))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_12))) : (((((/* implicit */_Bool) 3586531867U)) ? (((/* implicit */unsigned long long int) arr_22 [i_17 - 1] [0U] [0ULL])) : (var_13))))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((unsigned int) ((0ULL) & (((/* implicit */unsigned long long int) ((1915689788U) - (3151729196U)))))))));
                    }
                } 
            } 
        } 
    }
}
