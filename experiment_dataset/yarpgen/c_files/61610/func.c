/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61610
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) 3947801122U))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((_Bool) ((signed char) var_8));
        var_11 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_1 [i_0])));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) ((signed char) (unsigned short)41446)));
                        arr_12 [i_2] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) (-2147483647 - 1))));
                        var_12 = ((/* implicit */long long int) ((_Bool) ((_Bool) 4294967284U)));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((long long int) arr_3 [(unsigned short)6] [(unsigned short)6])));
        var_13 += ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (unsigned short)46311)));
    }
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) ((_Bool) arr_3 [i_4] [i_4]))));
            arr_18 [i_4] = ((unsigned int) ((_Bool) (_Bool)1));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) ((unsigned char) ((int) var_7)));
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((long long int) arr_7 [i_6])));
        }
        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
        {
            arr_24 [i_4] [i_4] = ((/* implicit */unsigned int) ((short) ((_Bool) ((_Bool) (unsigned short)46319))));
            arr_25 [i_7] [i_4] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) ((long long int) var_7))));
            /* LoopNest 3 */
            for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((long long int) ((long long int) 3284731030U)));
                            var_17 = ((long long int) ((unsigned int) ((unsigned long long int) (_Bool)1)));
                            arr_33 [i_4] [i_4] [i_7] [i_8] [i_4] [i_7] [7ULL] = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) ((unsigned int) arr_29 [i_4] [i_8] [i_4] [i_10]))));
                            var_18 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) ((unsigned long long int) arr_4 [i_7] [i_9] [(unsigned short)14]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) ((_Bool) ((unsigned short) arr_15 [i_4] [8U])))))));
            var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) ((_Bool) arr_23 [i_4] [i_4]))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned short) -1845764678946653864LL)))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        arr_41 [i_4] [i_4] [i_4] [i_13] [i_4] [i_13] = ((/* implicit */long long int) ((signed char) ((unsigned int) ((unsigned short) var_4))));
                        var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) 2081229253)));
                        var_23 *= ((_Bool) ((unsigned int) ((unsigned short) arr_30 [4ULL] [i_4] [i_12] [i_4] [i_4] [4ULL])));
                    }
                } 
            } 
            var_24 *= ((/* implicit */int) ((unsigned long long int) ((unsigned short) ((_Bool) -2704377230647055172LL))));
        }
        /* vectorizable */
        for (long long int i_14 = 1; i_14 < 18; i_14 += 4) 
        {
            var_25 += ((/* implicit */long long int) ((_Bool) ((_Bool) var_9)));
            /* LoopNest 2 */
            for (unsigned char i_15 = 4; i_15 < 16; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) var_0)));
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 1; i_17 < 18; i_17 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) ((unsigned int) ((short) arr_27 [i_15] [i_16])));
                            var_28 = ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) 1863075528)));
                            var_29 = ((/* implicit */unsigned int) ((_Bool) ((int) arr_3 [i_14] [i_14])));
                            var_30 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) 4679611393217695317ULL)));
                        }
                        for (short i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((unsigned short) ((unsigned short) 4294967288U))))));
                            var_32 += ((unsigned long long int) ((unsigned long long int) (unsigned short)7936));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            arr_56 [i_14] [i_4] [i_4] [i_14] [i_14] [i_4] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) (unsigned short)15057)));
                            arr_57 [(_Bool)1] [(_Bool)1] [14ULL] [i_4] [i_4] = ((/* implicit */long long int) ((short) ((long long int) (_Bool)1)));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((_Bool) ((_Bool) arr_50 [1ULL] [(_Bool)1] [i_16] [i_4] [1ULL] [i_4])))));
                        }
                        arr_58 [i_14] [1U] [i_4] = ((/* implicit */unsigned short) ((long long int) ((unsigned short) (short)-275)));
                        var_34 = ((/* implicit */unsigned int) ((_Bool) ((long long int) (_Bool)1)));
                        /* LoopSeq 3 */
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) ((unsigned char) ((long long int) var_4)));
                            var_36 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) arr_50 [i_20] [i_16] [i_15] [i_4] [i_4] [i_4])));
                            var_37 = ((/* implicit */_Bool) ((unsigned int) 3133597028511243988ULL));
                        }
                        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                        {
                            arr_63 [i_4] [i_4] = ((/* implicit */unsigned short) ((_Bool) ((long long int) (unsigned short)57599)));
                            var_38 &= ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_1)));
                            arr_64 [i_4] [i_4] [10U] [i_4] [10U] [i_21] = ((/* implicit */_Bool) ((long long int) ((unsigned int) arr_14 [(_Bool)1])));
                        }
                        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((unsigned short) ((long long int) (_Bool)1)))));
                            arr_67 [i_4] [i_4] [i_15] = ((unsigned long long int) ((unsigned long long int) var_9));
                            var_40 += ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) var_3)));
                            arr_68 [i_4] [i_4] [i_14] [i_15] [i_16] [14U] = ((/* implicit */unsigned int) ((long long int) ((unsigned short) var_4)));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_41 += ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) 2832677939U)));
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((unsigned int) ((long long int) ((unsigned short) (unsigned short)31466)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_24 = 2; i_24 < 18; i_24 += 3) 
            {
                var_43 = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_9)));
                arr_74 [i_4] [i_4] [i_4] = ((unsigned long long int) ((_Bool) -7943890537663460538LL));
            }
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 19; i_25 += 1) 
            {
                var_44 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) arr_60 [i_25] [13U] [i_23] [i_23] [13U] [1LL] [13U])));
                var_45 = ((/* implicit */signed char) ((_Bool) ((long long int) var_5)));
                var_46 = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) (_Bool)1)));
                var_47 += ((/* implicit */signed char) ((unsigned short) ((_Bool) var_5)));
                var_48 = ((/* implicit */unsigned short) ((short) ((unsigned short) 319340482)));
            }
            /* vectorizable */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_49 = ((/* implicit */_Bool) ((short) ((long long int) arr_75 [15LL] [3ULL] [i_4] [i_4])));
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 19; i_27 += 1) 
                {
                    for (unsigned short i_28 = 0; i_28 < 19; i_28 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((unsigned short) ((long long int) 4129906943U))))));
                            var_51 = ((_Bool) ((_Bool) arr_39 [7ULL] [(signed char)16] [7ULL] [(_Bool)1]));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
        {
            var_52 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) var_2)));
            arr_89 [i_4] [i_4] = ((_Bool) ((unsigned short) (unsigned short)42025));
            /* LoopNest 3 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (unsigned short i_31 = 0; i_31 < 19; i_31 += 4) 
                {
                    for (unsigned int i_32 = 0; i_32 < 19; i_32 += 4) 
                    {
                        {
                            arr_98 [i_30] [i_30] [4ULL] [i_31] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) 2387441036U)));
                            var_53 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) var_8)));
                            var_54 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_5)));
                            var_55 = ((_Bool) ((unsigned long long int) 10661931341300030448ULL));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_34 = 0; i_34 < 19; i_34 += 3) 
            {
                for (signed char i_35 = 2; i_35 < 17; i_35 += 3) 
                {
                    for (unsigned short i_36 = 0; i_36 < 19; i_36 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned short) ((int) ((int) ((short) arr_90 [i_34] [i_4] [i_4]))));
                            arr_111 [i_34] [i_33] [i_33] [i_4] [i_36] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) ((int) var_3))));
                            var_57 = ((/* implicit */_Bool) min((var_57), (((_Bool) (_Bool)1))));
                            var_58 = ((long long int) ((unsigned long long int) ((unsigned short) arr_0 [i_4])));
                        }
                    } 
                } 
            } 
            var_59 *= ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((_Bool) arr_88 [i_4] [i_4] [i_4]))));
        }
        for (unsigned long long int i_37 = 1; i_37 < 17; i_37 += 3) 
        {
            var_60 += ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) ((unsigned int) 13731286826917659119ULL))));
            arr_115 [13ULL] [i_4] = ((unsigned long long int) ((long long int) ((long long int) (signed char)-55)));
            arr_116 [i_4] [i_4] [i_37] = ((/* implicit */unsigned char) ((signed char) ((signed char) ((_Bool) var_1))));
        }
        var_61 = ((unsigned short) ((unsigned long long int) ((_Bool) 1974500670)));
        arr_117 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) ((unsigned long long int) var_6))));
    }
    for (unsigned long long int i_38 = 2; i_38 < 16; i_38 += 1) /* same iter space */
    {
        arr_121 [(unsigned short)11] [i_38] = ((/* implicit */unsigned int) ((long long int) ((int) ((unsigned int) arr_53 [i_38] [(unsigned char)12]))));
        arr_122 [i_38] = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) (_Bool)1)));
        var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) ((_Bool) ((unsigned int) ((long long int) arr_83 [i_38] [i_38] [i_38] [(_Bool)0] [16] [16])))))));
        var_63 = ((/* implicit */unsigned char) ((long long int) ((short) ((_Bool) (unsigned char)88))));
    }
}
