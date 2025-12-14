/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73167
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) << ((((~(var_7))) - (379856540U))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(max((2310303788U), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) max((1984663507U), (1775212681U)));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_4);
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_1 [(unsigned char)18]))));
        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((2519754622U) | (1775212686U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-50))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (var_2) : (var_5))) : (((/* implicit */unsigned long long int) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) ((var_7) >= (var_7))))));
        var_17 = ((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : ((-(1775212681U))));
        arr_13 [i_2] = ((unsigned long long int) 1775212681U);
        var_18 = ((/* implicit */short) ((unsigned int) var_12));
    }
    for (short i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_19 -= ((/* implicit */int) max((1775212666U), ((~(min((1775212674U), (var_10)))))));
        arr_18 [2] [i_3] = ((/* implicit */unsigned int) ((min((11171924775038661493ULL), (((/* implicit */unsigned long long int) ((unsigned char) arr_15 [i_3 + 2]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)0])))));
    }
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) 
        {
            var_20 = ((/* implicit */short) ((unsigned long long int) 1382931476));
            var_21 = ((/* implicit */short) var_11);
        }
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((11261529220841854590ULL) != (((/* implicit */unsigned long long int) 1775212652U)))))));
        var_23 = ((/* implicit */int) ((1775212669U) << (0U)));
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_24 = arr_20 [i_6] [i_6];
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_25 [i_6]);
        var_25 ^= ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294900721U)))))) - ((~(3934191073U)))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(15775502941173383517ULL))))))));
            arr_31 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_7]) - (arr_16 [i_6])))) || (((/* implicit */_Bool) var_6))));
        }
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (arr_30 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_11 [i_6])))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_6])))))))) && (((/* implicit */_Bool) var_11))));
    }
    var_28 = 24ULL;
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((3835387710U), (((/* implicit */unsigned int) -665956092)))), (var_7)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30264)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11))) : (var_11)))) / (((((/* implicit */_Bool) (unsigned char)142)) ? (10ULL) : (((/* implicit */unsigned long long int) 1775212669U)))))) : (max((((/* implicit */unsigned long long int) (-(var_9)))), (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) var_6))))))));
}
