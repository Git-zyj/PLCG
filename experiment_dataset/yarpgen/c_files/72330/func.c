/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72330
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (signed char)-9);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [3LL] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : ((~(arr_4 [i_2])))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)4)) & (((/* implicit */int) (_Bool)1))))) : (max(((~(-8359518352144636902LL))), ((~(4914635591196146209LL)))))));
                        var_16 = (+((~(var_14))));
                        var_17 = ((((/* implicit */_Bool) -8359518352144636897LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 12; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_16 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [0]))) : (4153540187U)));
            var_18 = ((/* implicit */signed char) (unsigned char)252);
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            arr_19 [i_4 + 1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) arr_12 [i_4 + 2])) : (-2243916333570982337LL)));
            arr_20 [12] &= ((/* implicit */unsigned int) var_6);
            arr_21 [i_4 + 3] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [2] [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 - 1] [(_Bool)1] [i_6]))) : (var_3)));
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (unsigned char i_8 = 3; i_8 < 14; i_8 += 1) 
            {
                {
                    var_19 = var_0;
                    arr_27 [i_4 - 3] = ((/* implicit */_Bool) (~(17LL)));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (signed char)123))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) arr_17 [i_9] [i_11] [i_11])) : ((~(((/* implicit */int) (signed char)121))))));
                        arr_39 [i_9] [i_9] [i_9] = ((/* implicit */long long int) var_9);
                        arr_40 [i_9] [i_9] = ((/* implicit */short) arr_30 [i_9] [i_10]);
                    }
                } 
            } 
        } 
        arr_41 [i_9] [i_9] = ((/* implicit */unsigned char) var_8);
        arr_42 [i_9] [i_9] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1655519229723505355LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-121))))) ? (((long long int) (signed char)(-127 - 1))) : (((/* implicit */long long int) ((/* implicit */int) (short)32754))))), (((/* implicit */long long int) (signed char)9))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9117997929237063210LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)5))))) ? (159641951386118202LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_9] [i_9] [i_9])))))))) || (((/* implicit */_Bool) ((int) arr_35 [i_9] [i_9] [13U])))));
        var_22 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
    }
    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
    {
        var_23 &= ((/* implicit */signed char) (+(((1413001774893755683LL) ^ (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) var_14))))))));
        arr_45 [i_13] [i_13] = ((/* implicit */unsigned char) min(((~(-9223372036854775805LL))), (((/* implicit */long long int) max((((int) -1655519229723505351LL)), (((/* implicit */int) min((arr_14 [i_13] [i_13]), (((/* implicit */unsigned short) (signed char)-26))))))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (-1893986685) : (((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) (short)9781)) ? (((var_0) + (((/* implicit */long long int) var_15)))) : (-9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 650938040345885114LL)) ? (((/* implicit */long long int) ((int) var_4))) : (var_0)));
    var_26 = ((/* implicit */unsigned int) var_0);
}
