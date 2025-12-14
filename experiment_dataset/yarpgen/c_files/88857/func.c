/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88857
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
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_4 [i_0]))))))));
                var_17 = ((((/* implicit */_Bool) var_10)) ? (max((min((9223372036854775807LL), (9223372036854775807LL))), (1099511627775LL))) : (((((/* implicit */_Bool) (short)-7512)) ? (((((/* implicit */_Bool) (short)18894)) ? (-7775359367243670771LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-12529))))));
                arr_6 [i_0] [i_0 + 2] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) ^ (((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_15))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (-8430557831218582196LL))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned char)255))))), (var_8)))) ? (min((((((/* implicit */_Bool) (unsigned char)81)) ? (-7666634444092671231LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) var_9)))) : (-5318241640891155718LL)));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -4015998285393877812LL)) ? (-1294225215952295789LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0]), (((short) (_Bool)1))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_11 [i_2] = var_11;
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-32758))))) ? ((((_Bool)1) ? (arr_9 [i_2]) : (8469698159268307716LL))) : (min((-8572499105481451636LL), (((/* implicit */long long int) (unsigned char)18))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26688))) : (3660098155920732899LL)));
        var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((8572499105481451613LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) | (((((/* implicit */_Bool) arr_9 [2LL])) ? (arr_9 [(unsigned char)14]) : (arr_10 [(short)20])))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 3; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_16 [i_2] [i_2] = ((/* implicit */short) (_Bool)1);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (7775359367243670782LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2913730893012961930LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2913730893012961940LL)))) ? (arr_10 [i_2]) : (((/* implicit */long long int) (-(33292288)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)15636))))));
                }
            } 
        } 
        var_22 = min((7775359367243670800LL), ((~(max((774094116939290443LL), (((/* implicit */long long int) (_Bool)1)))))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_19 [i_5] [i_5 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_5 + 1] [i_5 + 1]), (((/* implicit */long long int) arr_17 [i_5 + 1] [i_5 + 1])))))));
        arr_20 [i_5 + 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((((_Bool)1) ? (33292288) : (((/* implicit */int) var_9)))) : (((var_4) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) arr_15 [i_5] [i_5 + 1])) : (min(((-2147483647 - 1)), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2147483647)))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 24; i_7 += 1) 
        {
            arr_26 [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_6] [i_7 + 1])) ? (-8469698159268307704LL) : (-5078948725452121005LL))), (((/* implicit */long long int) (_Bool)1)))))));
            var_23 = ((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (((long long int) var_4))));
            arr_27 [i_7] = (i_7 % 2 == zero) ? ((((((~(774094116939290448LL))) + (9223372036854775807LL))) >> ((((+(((arr_24 [i_6] [i_7]) ^ (-774094116939290436LL))))) - (8958326111420897695LL))))) : ((((((~(774094116939290448LL))) + (9223372036854775807LL))) >> ((((((+(((arr_24 [i_6] [i_7]) ^ (-774094116939290436LL))))) - (8958326111420897695LL))) + (8654728655232344246LL)))));
        }
        var_24 = (((_Bool)1) ? ((-(((/* implicit */int) (short)3292)))) : (((/* implicit */int) var_6)));
    }
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
    {
        arr_30 [i_8] = ((/* implicit */short) 9223372036854775807LL);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_28 [i_8] [i_8])))) ? (min((((-7775359367243670773LL) % (((/* implicit */long long int) 1476569284)))), (((/* implicit */long long int) ((short) arr_24 [i_8] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)26693)) != (((/* implicit */int) ((short) var_12)))))))));
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
        {
            var_26 = min((((/* implicit */long long int) (short)11940)), ((((-(-8469698159268307739LL))) / (arr_25 [i_8]))));
            var_27 = ((/* implicit */int) 4639501119761037500LL);
        }
        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_28 += ((/* implicit */_Bool) 1023);
                            arr_47 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */long long int) (short)-3430);
                            var_30 *= ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_14))))), (((short) arr_40 [(short)13] [i_8] [i_8] [i_8]))))) : (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)15615)) : ((~(((/* implicit */int) (_Bool)1)))))))))));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_32 = (short)-22606;
            arr_51 [i_8] [i_14] = ((/* implicit */short) ((var_1) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_31 [i_8]))));
            arr_52 [i_8] = (_Bool)1;
            var_33 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)230))))) : (-6925358470110182949LL));
        }
    }
}
