/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98998
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_15))) < (((((/* implicit */_Bool) 15596113985523190288ULL)) ? (var_2) : (var_1)))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2850630088186361327ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (var_15)))) ? (((((/* implicit */_Bool) 15944746743554180033ULL)) ? (var_13) : (var_1))) : (((var_13) % (((/* implicit */unsigned long long int) var_14))))))) ? (((((/* implicit */_Bool) ((15300613906483473788ULL) - (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (var_4))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) var_0)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (var_5)))) : (((((/* implicit */_Bool) 15596113985523190285ULL)) ? (var_11) : (((/* implicit */long long int) var_12)))))))));
        var_21 ^= ((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned int) var_5))));
        var_22 ^= ((/* implicit */long long int) ((_Bool) var_1));
        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2850630088186361327ULL)) ? (((/* implicit */unsigned long long int) 585302466U)) : (1595171866744841232ULL)))) ? (((/* implicit */unsigned long long int) var_14)) : (15300613906483473788ULL)));
        arr_6 [i_1] = ((/* implicit */long long int) ((_Bool) var_3));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1932641836)) ? (2451724699U) : (1109509072U)))) ? (var_8) : (var_17)))) ? (((((/* implicit */_Bool) 7709869933258964837LL)) ? (((4574275360164571506ULL) - (var_15))) : (((((/* implicit */_Bool) var_16)) ? (var_4) : (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3065021328U)) - (9223372036854775807LL)))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) var_6)))) > (((((/* implicit */_Bool) var_11)) ? (6175488352958060240ULL) : (2850630088186361332ULL)))));
                        var_25 ^= ((/* implicit */unsigned long long int) var_8);
                        var_26 = ((unsigned int) ((int) min((0ULL), (((/* implicit */unsigned long long int) -9083443073468970272LL)))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 15944746743554180033ULL))) ? (((var_7) ? (((/* implicit */long long int) var_14)) : (var_10))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4072891840563056001LL)))))) ? (((unsigned long long int) ((unsigned long long int) var_17))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7687500798912994009ULL)) ? (662939771U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) var_0)) : (var_13))))))));
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 15944746743554180008ULL))) || (((/* implicit */_Bool) var_12)))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9083443073468970271LL)) ? (4349369492877848836LL) : (-9083443073468970272LL)));
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_12)) < (2501997330155371583ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) var_7))))) : (((var_7) ? (7036893195090775921ULL) : (((/* implicit */unsigned long long int) var_11)))))))));
            var_31 = var_9;
        }
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9083443073468970271LL)) ? (var_2) : (((/* implicit */unsigned long long int) var_16)))) ^ (((/* implicit */unsigned long long int) -9083443073468970285LL)))))));
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) var_6))))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) var_10))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((int) var_5))) : (((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned int) var_8))))));
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) 2850630088186361304ULL))));
            var_37 = ((/* implicit */_Bool) min((var_37), (((18446744073709551602ULL) != (15596113985523190300ULL)))));
            arr_26 [i_6] = ((/* implicit */unsigned long long int) (_Bool)0);
            var_38 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_17) : (((int) var_4))));
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                {
                    arr_31 [i_6] [i_10] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2453763482694937713ULL) : (((/* implicit */unsigned long long int) 0))));
                    arr_32 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) -2112209227)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2850630088186361328ULL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 2; i_12 < 22; i_12 += 3) 
                    {
                        arr_36 [i_6] [i_10] [i_11] [i_11] = ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (11227053537688804867ULL) : (((/* implicit */unsigned long long int) 67135491)));
                        var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) var_14))));
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) 888830249U)) ? (((/* implicit */unsigned long long int) var_5)) : (var_2))) : (((/* implicit */unsigned long long int) ((int) var_9)))));
                    }
                    for (int i_13 = 3; i_13 < 22; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_8)) : (-7086704497380865118LL))))));
                            var_42 = ((/* implicit */unsigned long long int) var_9);
                            var_43 ^= ((/* implicit */long long int) var_7);
                            var_44 ^= ((/* implicit */unsigned int) ((_Bool) var_8));
                        }
                        var_45 ^= ((/* implicit */_Bool) ((var_13) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741823U)) ? (1416521322431758980LL) : (var_10))))));
                        var_46 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11399855590418181099ULL)) ? (6735671637879319530LL) : (-6858826337474352038LL)))) >= (2850630088186361310ULL)));
                    }
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
    }
    var_48 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1608046793)) ? (((/* implicit */unsigned long long int) 6311186335817159974LL)) : (5097257770339070427ULL)));
    var_49 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 15596113985523190288ULL)) ? (((/* implicit */long long int) var_12)) : (var_10))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (979751637U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (10851036298084969906ULL) : (((/* implicit */unsigned long long int) var_11))))) ? (var_15) : ((((_Bool)1) ? (13ULL) : (12580683437126548020ULL)))))));
    var_50 = ((/* implicit */long long int) var_8);
}
