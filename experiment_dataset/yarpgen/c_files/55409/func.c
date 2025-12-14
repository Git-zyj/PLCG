/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55409
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
    var_10 -= ((max((min((var_3), (6141988820707819549LL))), (6141988820707819549LL))) ^ (-6453708908944053334LL));
    var_11 = (~(((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (((long long int) 9223372036854775807LL)) : (-4452518508673261458LL))));
    var_12 = ((long long int) var_1);
    var_13 &= var_1;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((long long int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (max((-5701999652390952097LL), (var_0))) : (arr_1 [i_0]))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((72057594037927936LL) / (-9223372036854775807LL)))));
        arr_2 [i_0] = min((7446861262586611227LL), ((~(-8467630514967906805LL))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((long long int) ((long long int) min((arr_4 [i_1]), (arr_0 [i_1]))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            arr_9 [i_2] [i_2] = var_7;
            var_16 = var_8;
            var_17 ^= arr_0 [i_2];
            /* LoopSeq 3 */
            for (long long int i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
            {
                var_18 = ((((/* implicit */_Bool) ((((var_2) + (var_9))) / (arr_4 [i_3 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((4452518508673261457LL) <= (7970578548280576971LL))))) : (min((max((-6141988820707819564LL), (9223372036854775807LL))), (((2942116997869917754LL) * (-1LL))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_19 = max(((~(-4293760878899110785LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6176853535801368033LL)) ? (var_1) : (-6141988820707819554LL)))) ? (((((/* implicit */_Bool) -9223372036854775806LL)) ? ((-9223372036854775807LL - 1LL)) : (2221400642025200413LL))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (9007130535264256LL) : (2199023255552LL))))));
                            arr_19 [i_2] [1LL] [i_3] [i_1] = ((long long int) 4293760878899110784LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) min((var_20), ((~((~(7906480081598450433LL)))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 2; i_6 < 11; i_6 += 2) 
                {
                    var_21 = 2199023255551LL;
                    /* LoopSeq 4 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (~(((long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-2402632809766062875LL) == ((-9223372036854775807LL - 1LL)))))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? ((~(2011529092530209462LL))) : (9223372036854775807LL)))))));
                        var_23 ^= arr_3 [i_6] [i_1];
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        arr_28 [i_8] [i_2] [i_1] [i_3] [i_2] [i_1] = ((long long int) arr_7 [i_8] [i_3 - 2]);
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_2] [i_6] [i_3] [i_2] [i_2] [i_1]) : (arr_26 [5LL] [i_2] [5LL] [i_3] [i_3] [i_2] [4LL])))) ? (arr_20 [i_6] [i_2]) : (((((/* implicit */_Bool) -9223372036854775806LL)) ? (arr_26 [i_1] [i_2] [i_1] [i_2] [11LL] [i_1] [i_1]) : (2221400642025200417LL))));
                        var_25 = (~((~(1235223289779418930LL))));
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) -8112671059229766748LL))) || (((/* implicit */_Bool) -799553932767031365LL)))))));
                        var_27 = ((/* implicit */long long int) ((((((long long int) -7968577314696142614LL)) - (((((/* implicit */_Bool) -7148126623681632686LL)) ? (34359738367LL) : (arr_10 [i_1] [i_2] [i_3]))))) > (((((/* implicit */_Bool) 4924203561121382836LL)) ? (7579567867925398698LL) : (9223372036854775807LL)))));
                    }
                    for (long long int i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        var_28 += ((/* implicit */long long int) (~(((/* implicit */int) (((~(6141988820707819563LL))) > (((((/* implicit */_Bool) var_3)) ? (266287972352LL) : (1235223289779418930LL))))))));
                        arr_35 [i_2] [i_2] = ((((/* implicit */_Bool) ((9223372036854775807LL) - (1355493312327360627LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((1355493312327360627LL) + (5940565847990694630LL))) != (((((/* implicit */_Bool) -4599686931858167225LL)) ? (2542005031374391823LL) : (-2221400642025200405LL))))))) : (7320137577796053197LL));
                        var_29 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-5382933348552301078LL) : (-8637129984323358839LL)))) ? ((~(var_3))) : (((((/* implicit */_Bool) -216879640413431696LL)) ? (arr_27 [11LL] [i_1] [i_3] [i_1] [i_1]) : (arr_14 [i_1] [i_2] [i_3] [i_6])))));
                        var_30 = ((/* implicit */long long int) min((var_30), (max((((((var_7) % (arr_10 [8LL] [i_2] [i_2]))) & (var_3))), (-7320137577796053198LL)))));
                    }
                }
                var_31 = (~(((long long int) ((((/* implicit */_Bool) 3LL)) ? (-5014823094145600164LL) : (var_1)))));
            }
            /* vectorizable */
            for (long long int i_11 = 2; i_11 < 11; i_11 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) ((long long int) var_6))) ? ((~(arr_32 [i_1] [i_1] [10LL] [0LL] [10LL] [i_11]))) : (-5963116247688607698LL)))));
                arr_38 [i_11] [i_2] [i_2] [i_1] = ((long long int) (~(var_9)));
            }
            for (long long int i_12 = 2; i_12 < 11; i_12 += 3) /* same iter space */
            {
                arr_41 [i_2] [10LL] [i_2] = ((/* implicit */long long int) ((-8309333359697794557LL) < ((((~(arr_11 [i_1]))) << ((((((~(5963116247688607678LL))) + (5963116247688607712LL))) - (33LL)))))));
                arr_42 [i_1] [i_1] [i_2] = ((8222989354737707512LL) / (1505569656266874762LL));
                var_33 ^= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1577197521379056090LL) : (arr_33 [i_12] [i_2] [i_1] [i_1] [0LL])))) ? (((long long int) 808897724935416673LL)) : ((~(var_9))))));
                var_34 = 0LL;
            }
            arr_43 [i_2] [i_2] = ((/* implicit */long long int) (((~(max((arr_29 [i_1] [i_2] [9LL]), (5014823094145600164LL))))) >= (((((long long int) -5963116247688607668LL)) / ((~(9223372036854775807LL)))))));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
        {
            arr_48 [i_1] [i_13] = arr_21 [i_13] [i_1] [i_1];
            var_35 = 524894550542670410LL;
            arr_49 [i_1] [i_13] = ((long long int) arr_39 [i_1] [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                {
                    var_36 = ((/* implicit */long long int) ((((34359738240LL) >> (((5014823094145600163LL) - (5014823094145600130LL))))) >= (((long long int) ((long long int) 5014823094145600168LL)))));
                    arr_54 [i_1] [i_14] [i_15] = ((7114395381267067867LL) + (-6355417044047093517LL));
                    arr_55 [i_15] [i_1] [i_1] = -5687438369449594949LL;
                }
            } 
        } 
    }
}
