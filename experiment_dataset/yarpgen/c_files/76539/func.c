/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76539
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) 9071576201599881179LL);
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) -1581235718)), (650378884431337658LL))), (((/* implicit */long long int) ((unsigned char) var_5)))))) ? (((((/* implicit */_Bool) min(((short)24897), ((short)8191)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_3 [i_0 - 1])))) : (((/* implicit */int) var_10))));
        var_12 *= ((/* implicit */signed char) max((((((/* implicit */int) arr_1 [i_0 - 1])) ^ (((/* implicit */int) var_11)))), (((/* implicit */int) arr_3 [i_0 - 1]))));
    }
    var_13 &= ((/* implicit */long long int) max((((/* implicit */int) var_7)), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))), (((/* implicit */int) min(((signed char)15), (((/* implicit */signed char) (_Bool)0)))))))));
    /* LoopSeq 3 */
    for (int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_10 [i_1] = min(((((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)38)))))), (((/* implicit */int) ((short) min((11039484179109131719ULL), (((/* implicit */unsigned long long int) arr_6 [i_1])))))));
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) / (max((7839601896606525949LL), (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned short)33202))) ? (((/* implicit */int) min((((/* implicit */short) arr_9 [i_1] [i_1])), ((short)-24897)))) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_3 [i_1])) * (max((((/* implicit */int) arr_1 [i_1])), (-1936845101)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_14 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_2] [i_2])))) & (((((/* implicit */_Bool) (short)32313)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) (signed char)-1))))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_1 [i_3 + 1]))));
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (-8872505565927428911LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            arr_18 [i_2] [i_3] = ((/* implicit */unsigned char) (~(arr_2 [i_3 + 1])));
            /* LoopNest 2 */
            for (unsigned char i_4 = 3; i_4 < 17; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            arr_29 [i_6] [i_4] [2ULL] [i_4] [i_2] = ((/* implicit */signed char) (+(arr_0 [i_3 - 2] [i_3 - 1])));
                            arr_30 [i_2] [i_3] [7U] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) var_2);
                            var_17 += ((/* implicit */_Bool) arr_19 [(short)2] [i_3 + 1]);
                            arr_31 [i_4] [i_3 + 1] [i_4 - 1] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) (signed char)64);
                            arr_32 [(short)3] [i_3 - 1] [i_4] [i_2] [(unsigned char)17] [i_4 - 3] [i_4 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_2] [i_3 + 1] [i_4] [i_4 - 2] [i_4] [i_4 + 3]))));
                        }
                        arr_33 [i_2] [i_5] [i_4] [i_3] [i_4] = ((/* implicit */long long int) arr_22 [i_2] [i_4 + 3] [(short)11] [i_3 - 2]);
                        var_18 += ((/* implicit */unsigned long long int) (-(1727004560)));
                        var_19 ^= 2387937104746086361LL;
                        arr_34 [i_5] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */signed char) (+(arr_19 [i_3 - 1] [i_3 + 1])));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_20 ^= ((/* implicit */unsigned int) (~(-1956705280)));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(2021265521U))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_22 += arr_36 [(_Bool)1] [i_8] [(_Bool)1];
            arr_41 [i_8] [i_8] [i_2] = (-(((/* implicit */int) (signed char)(-127 - 1))));
        }
        arr_42 [i_2] [i_2] = ((/* implicit */int) arr_16 [7U] [i_2] [i_2]);
    }
    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        arr_47 [16LL] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) min((min((-74912370), (((/* implicit */int) (short)-7)))), (((/* implicit */int) max(((short)32767), (((/* implicit */short) (signed char)79)))))))) < (((((unsigned int) var_4)) - (var_5)))));
        var_23 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned char) (_Bool)0)), (arr_45 [i_9] [i_9]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_9] [i_9])) || (((/* implicit */_Bool) arr_45 [i_9] [i_9])))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)7623)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5712171158786887653LL))))))));
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) var_5)))));
        arr_48 [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)4064)) ? (arr_0 [i_9] [(_Bool)1]) : (min((arr_0 [i_9] [i_9]), (((/* implicit */unsigned long long int) (short)-24877)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_9] [i_9]))) : (min((((/* implicit */long long int) var_4)), (-6172272435434679202LL))))))));
    }
}
