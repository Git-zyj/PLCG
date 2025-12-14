/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93764
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
    var_16 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((63LL) & (0LL)))) : ((-(17606127381464898571ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 7941039583208772332LL)) : (12629367239713596584ULL)))) ? (((((/* implicit */_Bool) -4695417349219550086LL)) ? (0ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) var_4);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (-(((arr_1 [i_1 - 1] [i_1 - 1]) % (var_10)))));
                        arr_9 [9LL] [i_2] [i_3] = ((var_6) / (((((/* implicit */_Bool) ((var_15) / (((/* implicit */unsigned long long int) -4749683245114033203LL))))) ? ((-(4749683245114033202LL))) : (((((/* implicit */_Bool) 4749683245114033202LL)) ? (3218570410336204281LL) : (-2663690099361945742LL))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [i_5] [i_5] [i_6] = ((unsigned long long int) ((17901412461402363786ULL) != (((/* implicit */unsigned long long int) var_6))));
                    var_19 ^= ((/* implicit */long long int) 12546655776264846135ULL);
                }
            } 
        } 
        arr_20 [i_4] [i_4] = ((long long int) ((0ULL) % (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [11LL]))));
    }
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 13; i_9 += 4) 
            {
                {
                    arr_29 [i_7] [i_7] [i_7] [i_9] = 4749683245114033202LL;
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            {
                                var_20 += ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (2130303778816LL) : (var_1))), (((long long int) arr_6 [i_7] [i_8] [i_9] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((0ULL) <= (arr_33 [i_8] [i_8] [i_8] [i_10] [i_8]))))) : (((long long int) arr_5 [i_9 - 1])));
                                var_21 = ((((/* implicit */unsigned long long int) min(((+(-4749683245114033205LL))), (((var_1) / (-4749683245114033204LL)))))) * (((((/* implicit */_Bool) ((16927606086421447770ULL) / (5900088297444705480ULL)))) ? (arr_22 [i_8]) : (((/* implicit */unsigned long long int) var_8)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
