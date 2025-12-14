/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77439
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [(short)8] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] |= ((/* implicit */short) (unsigned short)65535);
        arr_4 [(short)11] = ((/* implicit */unsigned short) (-(268435455ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)9378)) & (((/* implicit */int) (short)-28497))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)126)), ((+(((/* implicit */int) (unsigned short)62957)))))))));
                        arr_16 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */short) ((unsigned long long int) (unsigned short)9378));
                        arr_17 [i_1] [i_2 + 1] [12ULL] [i_1] [i_4] = ((/* implicit */unsigned int) max(((short)28497), ((short)-28497)));
                    }
                } 
            } 
        } 
        arr_18 [3LL] [3LL] = ((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775786LL));
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_17 += ((/* implicit */unsigned long long int) max((-552568290), (((/* implicit */int) (short)0))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            var_18 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) 50331648)), (15696517082600783806ULL)));
            var_19 = (-(17502413380339743586ULL));
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) 5279154576891395874LL);
        }
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) var_9);
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-17990))) - (7575623465822985980LL)))) ? (9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41157)))));
        }
        for (unsigned int i_8 = 3; i_8 < 13; i_8 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                arr_30 [i_5] [(signed char)4] [i_5] [9] = ((/* implicit */int) max((17058177884043064650ULL), (17945972259568177421ULL)));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_35 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(356268465U))))))));
                    var_22 -= ((/* implicit */unsigned int) var_0);
                    var_23 = ((/* implicit */long long int) (~(322999698639681782ULL)));
                    var_24 = ((/* implicit */long long int) max((4068241689U), (((/* implicit */unsigned int) (unsigned short)53317))));
                    var_25 |= ((/* implicit */int) ((unsigned int) 3402048446241214542ULL));
                }
                var_26 = ((/* implicit */short) arr_9 [i_5] [i_9]);
                var_27 = ((/* implicit */unsigned short) max((10806280346215257749ULL), (((/* implicit */unsigned long long int) (short)10987))));
            }
            for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) -7681453336580456993LL)) ? (arr_32 [i_11] [i_8 + 1] [i_11] [0LL] [0LL] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9387))))))));
                var_29 = ((/* implicit */short) 15585856731295153081ULL);
            }
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35389)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (5730602690094380075ULL)));
                var_31 = ((/* implicit */short) max((5730602690094380092ULL), (((/* implicit */unsigned long long int) (short)12288))));
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_1 [i_8 - 1]))));
                var_33 = ((/* implicit */int) (+(18446744073709551614ULL)));
            }
            var_34 = min((((/* implicit */short) (signed char)88)), ((short)-26231));
        }
        arr_42 [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) * (arr_28 [i_5] [(signed char)9] [i_5] [i_5]));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (short i_15 = 1; i_15 < 16; i_15 += 1) 
            {
                {
                    var_35 = min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (12716141383615171540ULL));
                    var_36 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) > (-2059447890)));
                    var_37 = ((/* implicit */unsigned int) min((4083626362736605931LL), (((/* implicit */long long int) 4068241689U))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        for (long long int i_17 = 1; i_17 < 17; i_17 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) ((unsigned short) (signed char)22));
                                arr_54 [i_13] [i_13] [8ULL] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15458))))), (6423876104388402574LL)));
                                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */int) (signed char)-1)) % (831188873))))));
                                arr_55 [i_16] [i_16] [4U] [(unsigned short)5] [i_16] &= ((/* implicit */long long int) ((unsigned short) 9223372036854775803LL));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 3; i_18 < 17; i_18 += 3) 
                    {
                        var_40 *= ((/* implicit */short) (!(((/* implicit */_Bool) (short)28502))));
                        arr_58 [i_15] [0U] = ((/* implicit */short) max((((/* implicit */unsigned short) (short)-30232)), ((unsigned short)0)));
                        var_41 = ((/* implicit */short) var_14);
                        arr_59 [i_13] [11ULL] [13U] = ((/* implicit */short) (unsigned short)27);
                    }
                    for (short i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        arr_63 [i_19] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8)) && (((/* implicit */_Bool) (unsigned short)27))));
                        arr_64 [15] [i_14] [i_14] [15] [i_19] = min(((unsigned short)12), ((unsigned short)24887));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 14; i_20 += 4) 
    {
        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 2) 
        {
            {
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 831188873)) ? (3938698830U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32436))))))));
                var_43 ^= ((/* implicit */unsigned long long int) max(((signed char)110), ((signed char)-89)));
            }
        } 
    } 
}
