/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76286
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (1184907496U)))) ? (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_3)) ? (var_14) : (var_18)))));
        var_19 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : ((((_Bool)1) ? (6486009131180646021ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [19ULL])))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        arr_4 [18U] |= (~(((((/* implicit */_Bool) (-(var_1)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
        {
            arr_10 [i_1] = (+(7036892154232742269LL));
            var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (var_18)));
        }
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7299172658548999553ULL)) ? (3395780205U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            var_22 = ((/* implicit */long long int) (((_Bool)1) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3]))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (((_Bool)1) ? (4864082235222395717ULL) : (((/* implicit */unsigned long long int) -746289190548768530LL)))))));
                var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) (+(var_1)))) ? ((~(0LL))) : (((/* implicit */long long int) 4134451596U))))));
                arr_16 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_13 [i_1] [i_3] [i_1]))))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [0U] [i_3 + 1])))));
                    var_26 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                    var_27 = ((((/* implicit */_Bool) -3671708688377397273LL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 2] [i_3]))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 0U)) : (arr_18 [i_3 - 1] [i_3 - 1] [17U] [i_5])));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) 2779970746U)) : (arr_8 [i_1] [i_3 - 1])));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (-(-2312356664639510149LL)));
                        arr_25 [i_1] [i_1] [16U] [16U] [i_7] [i_1] = ((/* implicit */unsigned long long int) (-(arr_23 [i_3 + 1] [i_1] [8U] [i_1] [i_3 + 2])));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 0U)) : (-746289190548768530LL)));
                        arr_29 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1022344600U)) ? (arr_8 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_6])))))) ? (((((/* implicit */_Bool) 469662136814398363ULL)) ? (12072288005890262483ULL) : (0ULL))) : (((/* implicit */unsigned long long int) (+(var_11))))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        var_31 += ((/* implicit */_Bool) (((!(arr_11 [i_4] [i_1]))) ? (((/* implicit */unsigned long long int) 942608443595091580LL)) : (18395807219760397891ULL)));
                        var_32 *= ((/* implicit */unsigned int) (-(((arr_11 [i_1] [6U]) ? (var_14) : (((/* implicit */unsigned long long int) 4294967292U))))));
                        var_33 += (~(var_16));
                        arr_32 [i_9] [i_1] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3339279149U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (0U) : (472318667U)));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_1] [i_3 - 1] [i_10 - 1] [i_1])) ? (7070726440171059984ULL) : (((/* implicit */unsigned long long int) -7792190777290433119LL))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (5ULL) : (((/* implicit */unsigned long long int) 0LL))))) ? (((arr_13 [i_1] [i_4] [i_1]) ? (3576061887U) : (arr_14 [i_1] [i_3] [i_4] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 12768115013927602707ULL))))))));
                        var_36 += ((/* implicit */unsigned long long int) ((var_8) ? (13LL) : (arr_8 [i_4] [i_3 + 2])));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (+(5678629059781948909ULL))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        arr_39 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [3U] [i_3] [i_1] [i_6] [i_11]))));
                        var_38 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_39 |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3339279149U)) : (2238980627944624729ULL)));
                        arr_42 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_21 [i_3] [i_3 + 2] [i_1] [i_6])) ? (arr_21 [i_6] [i_3 - 1] [i_1] [17U]) : (((/* implicit */unsigned long long int) arr_40 [i_1] [i_1] [i_3 - 1] [i_3] [i_3 + 1])));
                        var_40 = ((((/* implicit */_Bool) var_5)) ? (var_14) : (16194375237811393222ULL));
                    }
                    for (unsigned int i_13 = 3; i_13 < 18; i_13 += 4) 
                    {
                        arr_47 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_38 [i_3] [i_3 + 1] [i_13] [i_13] [i_13] [i_13 - 1] [i_13 + 2]))));
                        var_41 = ((arr_34 [i_1] [i_1] [i_4] [i_6] [i_1]) ? (var_14) : (var_12));
                        arr_48 [i_1] [1U] = ((/* implicit */long long int) (+(2833746993U)));
                        arr_49 [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_13 + 3] [i_1]))) : (1022344600U)));
                    }
                    var_42 = (-(147866021U));
                }
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    arr_52 [i_1] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2499694554361161632LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (var_3) : (2923698493U)));
                    arr_53 [14LL] [14LL] [i_4] [14LL] [14LL] [14LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_3] [20U])) ? (((/* implicit */unsigned long long int) var_11)) : (var_12)));
                }
            }
            var_43 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 955688135U)) ? (var_17) : (14942315761348345332ULL)))));
        }
        var_44 = ((/* implicit */unsigned long long int) (-(var_9)));
        var_45 |= ((((/* implicit */_Bool) (~(16764672987740858578ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_35 [i_1]));
    }
    var_46 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
}
