/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60184
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))))), ((+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((_Bool) (_Bool)1)))))));
        arr_4 [i_0] = var_0;
        var_12 = (_Bool)1;
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1))))))) ? ((+(((/* implicit */int) ((_Bool) (_Bool)1))))) : (((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_13 = var_3;
                    var_14 = ((/* implicit */_Bool) (((!((_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1))))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        var_16 -= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
    }
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */_Bool) min((var_17), ((_Bool)1)));
        var_18 = ((/* implicit */_Bool) min((var_18), (var_6)));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_19 += ((/* implicit */_Bool) (+((~((~(((/* implicit */int) var_9))))))));
                        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_21 = var_4;
                        var_22 = (_Bool)1;
                    }
                } 
            } 
            var_23 -= ((/* implicit */_Bool) min(((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) (_Bool)1))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_7))))) ? ((~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) : ((+((~(((/* implicit */int) (_Bool)1))))))));
            var_25 = (!((!(max(((_Bool)0), ((_Bool)1))))));
        }
        arr_26 [i_5] = ((/* implicit */_Bool) (((!(var_7))) ? ((~(((/* implicit */int) var_10)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_26 = ((((/* implicit */int) ((_Bool) (_Bool)1))) > (((/* implicit */int) (!((_Bool)1)))));
                                var_27 = (_Bool)1;
                            }
                        } 
                    } 
                    arr_43 [i_11] [i_10] [i_9 + 1] = (_Bool)1;
                    arr_44 [i_9] [i_10] [i_11] [i_10] = (_Bool)0;
                }
            } 
        } 
        var_28 = var_5;
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_29 = ((((/* implicit */int) (!((_Bool)1)))) > ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_56 [i_15] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
                        arr_57 [i_14] [i_15] [(_Bool)1] [i_14] = ((_Bool) (-(((/* implicit */int) (_Bool)0))));
                        var_30 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) - ((-(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_31 = (_Bool)1;
            arr_61 [i_14] [i_14] [i_18] = ((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_64 [i_14] [(_Bool)1] [i_19] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) * (((/* implicit */int) var_5))))));
            var_32 = (_Bool)1;
            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) ^ ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
            arr_69 [i_14] [(_Bool)1] [i_14] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_35 = ((/* implicit */_Bool) min((var_35), (var_4)));
            arr_72 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))));
            var_36 = (!(var_8));
        }
    }
    /* LoopSeq 4 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_37 = ((/* implicit */_Bool) max((var_37), (((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))))))) > (((/* implicit */int) (_Bool)1))))));
        arr_77 [i_22] = ((_Bool) (~(((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_38 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : ((-(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((max(((_Bool)1), ((_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), (var_4)));
                        var_41 = ((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_42 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))));
        arr_88 [i_23] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
    {
        arr_91 [i_27] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        var_43 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_6)) : ((-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_9))))))));
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
    {
        arr_96 [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (max(((-(((/* implicit */int) (_Bool)0)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        var_44 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
