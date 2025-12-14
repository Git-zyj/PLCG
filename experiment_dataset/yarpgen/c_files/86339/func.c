/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86339
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), ((+(827269595)))));
        arr_3 [i_0] = ((/* implicit */_Bool) -121041921);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (1173660039) : (131071))), (((/* implicit */int) (((+(((/* implicit */int) arr_5 [i_1])))) != (((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) var_5)))))))));
        var_15 = ((_Bool) var_2);
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2 - 1] = (+(((/* implicit */int) arr_6 [i_2 - 1])));
        arr_10 [i_2] = (+(((/* implicit */int) (_Bool)1)));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((0) + (-793632278))) + (2147483647))) >> (((489501204) & (((/* implicit */int) (_Bool)1)))))))));
        arr_15 [i_3] = min((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) ((0) <= (9524488)))))), (((arr_7 [i_3 - 1]) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_17 = min((((((/* implicit */int) arr_19 [i_3 - 1] [i_3] [i_3] [i_3 - 1])) - (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (arr_14 [i_3 - 1]) : (((/* implicit */int) arr_19 [i_3 - 1] [i_3] [i_3] [i_3 - 1])))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((arr_8 [i_3 - 1]) || (arr_8 [i_3 - 1])))))))));
                    }
                } 
            } 
            var_19 -= ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), (var_4)))), ((~(((/* implicit */int) min((var_11), (arr_16 [12] [i_4]))))))));
            arr_25 [(_Bool)1] &= ((int) 161245955);
            var_20 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))))) < (min((((/* implicit */int) arr_8 [i_3 - 1])), (max((((/* implicit */int) var_7)), (var_10)))))));
        }
        for (int i_7 = 2; i_7 < 18; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((((((_Bool)1) ? (510125897) : (270723860))) - (((/* implicit */int) (_Bool)1)))))))));
                arr_33 [i_3] [i_3 - 1] [i_3] = ((/* implicit */_Bool) arr_1 [i_3 - 1]);
                arr_34 [4] [i_7 - 2] [i_8] &= (((+((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [i_3])))))) + ((+((((_Bool)1) ? ((-2147483647 - 1)) : (-586690488))))));
                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_19 [(_Bool)1] [14] [i_7] [14]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) ((_Bool) var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2141973762) : (((/* implicit */int) var_7))))) ? (min((2147483584), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))))))));
                var_23 = ((/* implicit */_Bool) (+(((264241152) - (((var_10) + (((/* implicit */int) (_Bool)1))))))));
            }
            var_24 = ((/* implicit */_Bool) (~(max((-1851260388), (((/* implicit */int) arr_24 [i_3] [i_3 - 1] [i_3 - 1] [i_7]))))));
            var_25 = max(((_Bool)1), ((_Bool)0));
            var_26 = ((/* implicit */_Bool) ((int) ((int) arr_0 [i_3 - 1])));
        }
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_19 [5] [i_3] [i_3 - 1] [i_3])) > (((/* implicit */int) arr_19 [i_9] [i_3] [i_3 - 1] [i_9])))))));
            var_28 = ((((/* implicit */_Bool) ((arr_36 [i_3 - 1]) ? (((/* implicit */int) arr_36 [i_3 - 1])) : (((/* implicit */int) arr_36 [i_3 - 1]))))) ? (((((/* implicit */_Bool) 1157877663)) ? (((/* implicit */int) (_Bool)1)) : (579404704))) : (((((/* implicit */int) (_Bool)1)) - (1083678957))));
            var_29 = ((/* implicit */int) arr_20 [i_3] [i_9] [i_3] [i_9]);
            var_30 = ((int) var_4);
        }
    }
    var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((var_8) * (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_8) : (((var_0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))) : (((var_4) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))));
    var_32 = (_Bool)0;
}
