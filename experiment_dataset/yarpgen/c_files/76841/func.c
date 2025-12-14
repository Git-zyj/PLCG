/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76841
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned long long int) (+(1605288123037530535ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 = var_17;
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (+((~(5296860783004814127LL)))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1] [i_3 - 1]) & (arr_5 [i_0] [i_1] [i_3 + 1]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_22 = ((/* implicit */short) ((int) arr_1 [i_0]));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) (+(-1838253583374249251LL)));
                var_24 = ((/* implicit */unsigned short) ((int) arr_17 [i_5 + 3] [i_5] [i_5]));
            }
            var_25 = ((/* implicit */_Bool) (+(-7888909322544331311LL)));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned long long int) arr_6 [i_4] [i_4] [i_6 + 1]);
                        var_27 = ((/* implicit */unsigned short) (~(arr_14 [i_6 + 2] [i_6] [i_6])));
                        var_28 = ((/* implicit */_Bool) -1838253583374249234LL);
                        var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) var_18)) : (((unsigned long long int) (_Bool)0))));
                    }
                } 
            } 
        }
    }
    var_30 -= ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_31 = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)12778))))));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_27 [i_8 - 1] [i_8 - 1])), (var_8)))));
        var_32 &= ((/* implicit */int) arr_27 [i_8 - 1] [i_8 - 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            for (short i_10 = 2; i_10 < 18; i_10 += 2) 
            {
                {
                    arr_35 [i_10] [i_9] [i_10] &= ((/* implicit */unsigned long long int) (unsigned char)32);
                    arr_36 [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_25 [i_9]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_11 = 2; i_11 < 19; i_11 += 2) 
        {
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_31 [i_11] [i_11] [i_11] [i_11])) : (var_15)))) * (arr_29 [i_11] [i_11 - 1])))))));
            var_34 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            var_35 += ((/* implicit */signed char) ((short) (~(((/* implicit */int) var_7)))));
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                arr_44 [i_12] [i_12] = max((-1838253583374249241LL), (((/* implicit */long long int) 544679647)));
                arr_45 [i_11] = ((/* implicit */_Bool) (+((+(var_17)))));
            }
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)152))))) ? (503342339711165733LL) : (-765138644359043213LL)));
                var_37 = ((/* implicit */short) (-((~((~(503342339711165733LL)))))));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 2; i_14 < 17; i_14 += 1) 
                {
                    var_38 += ((/* implicit */long long int) (~((+(((/* implicit */int) arr_42 [i_8 - 1] [i_11 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1926396096)))) ? (((((/* implicit */_Bool) arr_48 [i_15 + 1] [i_15] [i_15 + 4] [i_15] [i_15 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11252))) : (8958402206277904846ULL))) : (((unsigned long long int) arr_48 [i_15 + 3] [i_15] [i_15 + 2] [i_15] [i_15 + 2]))));
                        var_40 = ((/* implicit */int) arr_40 [i_11] [i_11 + 1] [i_11]);
                    }
                    var_41 = ((/* implicit */unsigned long long int) min(((+((+(((/* implicit */int) var_13)))))), (((/* implicit */int) ((arr_51 [i_14] [i_14] [i_8] [i_14] [i_14 + 1]) >= (arr_51 [i_14] [i_8] [i_11] [i_14] [i_14 + 3]))))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    var_42 = ((/* implicit */int) min((max((arr_42 [i_8] [i_8 - 1]), (arr_54 [i_8] [i_8] [i_13] [i_13] [i_13] [i_16]))), (((/* implicit */unsigned short) var_10))));
                    var_43 *= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_55 [i_8] [i_8] [i_11] [i_8]))))) ? (((/* implicit */int) arr_54 [i_8] [i_11] [i_8] [i_8] [i_16] [i_16])) : (((/* implicit */int) arr_54 [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8 - 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)152))));
                        var_45 += ((/* implicit */short) (+(((long long int) arr_47 [i_8] [i_8] [i_8]))));
                    }
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_11] [i_11 + 1])) ? ((+(((/* implicit */int) arr_42 [i_11 + 1] [i_11 - 1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (arr_48 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_11] [i_11 - 2]))))));
                }
                var_47 ^= ((/* implicit */unsigned char) (+((~(arr_60 [i_8 - 1] [i_8] [i_11 + 1])))));
            }
        }
    }
    var_48 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -503342339711165722LL)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= ((+(((/* implicit */int) (short)-1))))))) : (((/* implicit */int) ((((/* implicit */long long int) -315293502)) != ((+(-114852038042568856LL))))))));
}
