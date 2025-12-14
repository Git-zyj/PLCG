/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63318
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
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(unsigned short)18])) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) var_11))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) (unsigned short)60736);
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11883))) <= (((((/* implicit */_Bool) arr_1 [18LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_12))))))));
            var_18 = ((/* implicit */unsigned short) ((-5414134592327910198LL) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [0LL]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51879)))))))));
            arr_6 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned short)23176)))), ((+(((/* implicit */int) (signed char)68))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_2 [(unsigned short)10]))));
    }
    for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)68)) >= (((/* implicit */int) arr_8 [(unsigned short)8])))) ? (((/* implicit */int) ((unsigned short) arr_3 [22LL] [i_2 - 3] [i_2 + 3]))) : ((-(((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_1 [(unsigned short)12]))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [12LL] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_2])))) ? (arr_4 [i_2] [i_2]) : (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (-1LL))) >= ((-(((((/* implicit */_Bool) arr_0 [i_2])) ? (33546240LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_22 -= var_10;
                        arr_20 [i_3] [i_2] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
                        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_2])), (arr_14 [i_2]))))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16128)) - (((/* implicit */int) (unsigned short)49910))));
        var_24 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_2 [i_6])))), (((/* implicit */int) var_10))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14577)) ? (2301339409586323456LL) : (-8815701702194944143LL))))));
        var_26 = ((/* implicit */unsigned short) ((max((1686595196119136782LL), (((/* implicit */long long int) (unsigned short)22661)))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min(((signed char)3), ((signed char)39))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (signed char)62))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_5))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)42504)) && (((/* implicit */_Bool) (unsigned short)1920))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -2301339409586323432LL)) ? (var_12) : (((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (8566378989369375760LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
    }
    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            var_31 = arr_29 [i_9] [i_8] [i_8];
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_32 = ((/* implicit */unsigned short) var_7);
                var_33 = ((/* implicit */signed char) (-(var_6)));
            }
        }
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((6127714104751751559LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12917)))))) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) arr_25 [i_8] [i_11])))) - (((((/* implicit */_Bool) (unsigned short)58511)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (signed char)-50)))))))));
            var_35 = (unsigned short)45590;
        }
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                for (long long int i_14 = 2; i_14 < 15; i_14 += 4) 
                {
                    {
                        var_36 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 812680475612832340LL)) ? (((/* implicit */int) arr_30 [(unsigned short)9])) : (((/* implicit */int) arr_44 [(unsigned short)8])))) % ((-(((/* implicit */int) arr_37 [i_14 + 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 2; i_15 < 16; i_15 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (26LL)))));
                            arr_48 [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -8815701702194944143LL)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned short)6736))))) == (((var_6) + (((long long int) 8815701702194944143LL))))));
                            var_38 = ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-51)) >= (((/* implicit */int) arr_2 [i_15]))))) + (((/* implicit */int) arr_32 [i_8] [i_8] [i_8] [i_8]))));
                        }
                        var_39 = ((/* implicit */long long int) (signed char)(-127 - 1));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
    {
        for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_18 = 3; i_18 < 16; i_18 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_19 = 1; i_19 < 18; i_19 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)50))))) - (min((min((((/* implicit */long long int) var_5)), (-2301339409586323461LL))), (((/* implicit */long long int) arr_1 [i_16]))))));
                        arr_58 [i_16] [i_18] [i_17] [i_17] [i_16] = ((signed char) ((((/* implicit */_Bool) (unsigned short)48347)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (unsigned short)65528))));
                        var_41 = (signed char)-4;
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)62)) >= (((((/* implicit */_Bool) 11LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 7460456519498033159LL)) && (((/* implicit */_Bool) (unsigned short)15271))))) : (((/* implicit */int) (signed char)-8)))))))));
                    }
                    for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        var_43 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_53 [i_16] [i_20]))))), (max((arr_61 [i_16] [i_17] [i_20] [i_20] [i_20]), (((/* implicit */long long int) (signed char)(-127 - 1)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) arr_62 [i_16] [i_16] [i_18] [i_20])))));
                        var_44 = ((/* implicit */long long int) (signed char)68);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_21 = 1; i_21 < 18; i_21 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned short) ((arr_61 [i_17] [i_16] [i_21 + 1] [i_16] [i_16]) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_16])) ? (((/* implicit */int) arr_3 [i_16] [i_17] [i_18 - 2])) : (((/* implicit */int) (unsigned short)64623)))))));
                        var_46 = ((/* implicit */unsigned short) (+(-2301339409586323457LL)));
                    }
                    /* vectorizable */
                    for (unsigned short i_22 = 1; i_22 < 18; i_22 += 2) /* same iter space */
                    {
                        var_47 = 2272689509992422094LL;
                        var_48 = ((/* implicit */long long int) max((var_48), ((-(-8815701702194944135LL)))));
                    }
                    for (unsigned short i_23 = 2; i_23 < 18; i_23 += 4) 
                    {
                        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (unsigned short)19729))));
                        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((((/* implicit */_Bool) 7220792005538941976LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_23]))) : (1685706242674576780LL))) + (arr_55 [i_23] [i_23] [i_23 + 1] [i_23]))))));
                        arr_73 [i_16] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_69 [i_23 - 1] [i_16]), (arr_69 [i_23 + 1] [i_16])))) + (((((/* implicit */_Bool) arr_0 [i_16])) ? (((((/* implicit */_Bool) arr_49 [i_16])) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) arr_70 [i_16])))))));
                    }
                    var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_16] [i_16])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (max((((/* implicit */long long int) arr_63 [i_18] [i_16] [i_16] [i_18] [i_18] [i_18])), (arr_55 [i_16] [i_16] [i_17] [6LL])))))) : (((/* implicit */int) ((unsigned short) -3719845114149330328LL)))));
                }
                for (unsigned short i_24 = 0; i_24 < 19; i_24 += 2) 
                {
                    var_52 = ((/* implicit */long long int) min((var_52), (-2301339409586323456LL)));
                    var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_55 [i_24] [i_24] [i_24] [i_24]), (arr_55 [i_24] [(unsigned short)0] [i_24] [i_17])))))))));
                    var_54 = ((((((/* implicit */int) arr_21 [i_17])) > (((/* implicit */int) arr_21 [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_72 [i_24] [i_17])), (var_13))))) : ((+(-2272689509992422111LL))));
                }
                var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) var_0))));
                var_56 = ((/* implicit */unsigned short) (!(((-2301339409586323432LL) == (0LL)))));
            }
        } 
    } 
}
